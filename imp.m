% vim: ft=mercury
:- module imp.

:- interface.
:- import_module list.
:- type statement.
:- type program == list(statement).
:- type effect
   ---> print_eff(string).
:- func eval_program(program) = list(effect) is semidet.

:- implementation.
:- import_module map.
:- import_module string.
:- import_module int.

:- type expr
   ---> str_expr(string)
      ; int_expr(int)
      ; var_expr(string)
      ; plus_expr(expr, expr)
      ; bottom.


:- type statement
   ---> print(expr)
      ; assign(string, expr)
      .


:- func initial_state = state is det.
initial_state = map.init.

:- type state == map(string, expr).


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
eval_expr(State, plus_expr(A, B)) = {int_expr(Result), Effects} :-
    ( if int_expr(AVal) = A, int_expr(BVal) = B then
        Result = AVal + BVal,
        Effects = []
    else if int_expr(AVal) = A, {int_expr(BVal), BEffects} = eval_expr(State, B) then
        Result = AVal + BVal,
        Effects = BEffects
    else if {int_expr(AVal), AEffects} = eval_expr(State, A),
            {int_expr(BVal), BEffects} = eval_expr(State, B) then
        Result = AVal + BVal,
        Effects = append(AEffects, BEffects)
    else
        fail
    ).
         
eval_program(Statements) = Out :-
  FoldWith = (pred(Statement::in, StateEffects::in, OutInner::out) is semidet :-
    {State, Effects} = StateEffects, {NewState, NewEffects} = eval_statement(Statement, State), OutInner = {NewState, append(Effects, NewEffects)}
  ),
  foldl(FoldWith, Statements, {initial_state, []}, {_, Out}).

:- func my_program = program.
my_program =
  [ assign("X", int_expr(5))
  , assign("Y", var_expr("X"))
  , print(plus_expr(var_expr("X"), var_expr("Y")))
  , assign("X", int_expr(6))
  , print(plus_expr(var_expr("X"), var_expr("Y")))
  , print(plus_expr(var_expr("X"), var_expr("Y")))
].
% main(!IO) :-
%   ( if Evaled = eval_program(my_program) then io.write_line(Evaled, !IO) else io.write_line("Failed", !IO) ).


