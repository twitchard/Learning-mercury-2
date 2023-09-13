:- module imp.

:- interface.
:- use_module io.
:- pred main(io.io::di, io.io::uo) is det.

:- implementation.
:- import_module map.
:- import_module string.
:- import_module list.
:- import_module int.

:- type expr
   ---> str_expr(string)
      ; int_expr(int)
      ; var_expr(string)
      ; plus_expr(expr, expr)
      .

% :- func is_value(expr) = boolean.
% is_value(str_expr(_)) = true.
% is_value(int_expr(_)) = true.
% is_value(_) = false


:- type statement
   ---> print(expr)
      ; assign(string, expr)
      .

:- func initial_state = state is det.
initial_state = map.init.

:- type state == map(string, expr).
:- type effect
   ---> print_eff(string)
      ; type_error.


:- func eval_statement(statement, state) = {state, list(effect)} is semidet.
eval_statement(print(X), State) = Out :-
  {NewExpr, Effects} = eval_expr(State, X),
  ( (str_expr(Str) = NewExpr, Out = {State, [print_eff(Str) | Effects]});
    (int_expr(Int) = NewExpr, Out = {State, [print_eff(int_to_string(Int)) | Effects]})
  ).
eval_statement(assign(Name, Expr), State) = Out :-
  {Evaled, Effects} = eval_expr(State, Expr),
  Out = {set(State, Name, Evaled), Effects}.

:- func eval_expr(state, expr) = {expr, list(effect)} is semidet.
eval_expr(_, int_expr(Int)) = {int_expr(Int), []}.
eval_expr(_, str_expr(Str)) = {str_expr(Str), []}.
eval_expr(State, var_expr(Name)) = Out :- search(State, Name, Value), Out = {Value, []}.
eval_expr(State, plus_expr(A, B)) = Out :-
  ( if int_expr(AVal) = A, int_expr(BVal) = B
    then Out = {int_expr(AVal + BVal), []}
    else ( if int_expr(AVal) = A, {int_expr(BVal), Effects} = eval_expr(State, B)
           then Out = {int_expr(AVal + BVal), Effects}
           else ( if {int_expr(AVal), AEffects} = eval_expr(State, A), 
                     {int_expr(BVal), BEffects} = eval_expr(State, B)
                  then Out = {int_expr(AVal + BVal), append(AEffects, BEffects)}
                  else fail
                )
         )
  ).
         
        
% eval_expr(State, plus_expr(int_expr(A), B)) = Out :-
%   {int_expr(BEval), Effects} = eval_expr(State, B),
%   Out = {int_expr(A + BEval), Effects}.
% eval_expr(State, plus_expr(A, B)) = Out :-
%   {int_expr(AEval), Effects} = eval_expr(State, A),
%   {Result, MoreEffects} = eval_expr(State, plus_expr(int_expr(AEval), B)),
%   Out = {Result, append(Effects, MoreEffects)}.
  
% eval_expr(State, var_expr(Name)) =
%   search(State, X), X; 
%   bottom.

:- func eval_program(list(statement)) = list(effect) is semidet.
eval_program(Statements) = Out :-
  FoldWith = (pred(Statement::in, StateEffects::in, OutInner::out) is semidet :-
    {State, Effects} = StateEffects, {NewState, NewEffects} = eval_statement(Statement, State), OutInner = {NewState, append(Effects, NewEffects)}
  ),
  foldl(FoldWith, Statements, {initial_state, []}, {_, Out}).


:- func my_program = list(statement).
my_program =
  [ assign("X", int_expr(5))
  , assign("Y", var_expr("X"))
  , print(plus_expr(var_expr("X"), var_expr("Y")))
  , assign("X", int_expr(6))
  , print(plus_expr(var_expr("X"), var_expr("Y")))
  , print(plus_expr(var_expr("X"), var_expr("Y")))
].
main(!IO) :-
  ( if Evaled = eval_program(my_program) then io.write_line(Evaled, !IO) else io.write_line("Failed", !IO) ).


