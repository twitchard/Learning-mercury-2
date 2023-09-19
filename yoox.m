
:- module yoox.
:- interface.
:- import_module list.
:- import_module parsing_utils.

%%% APP %%%
:- type app ---> app(list(element)).

:- type element --->
    datum(string)
  ; action(string).



func compile_element(datum


parse(In,Out) :-  
  parsing_utils.parse(In, parse_program, Out).
  

:- pred parse_program(src::in, program::out, ps::in, ps::out) is semidet.
parse_program(Src, Out, !PS) :- 
  whitespace(Src, _, !PS),
  one_or_more(parse_statement, Src, List, !PS),
  Out = program(List).
  
:- pred parse_statement(src::in, statement::out, ps::in, ps::out) is semidet.
parse_statement(Src, Out, !PS) :- 
  if parse_equality(Src, Id, Val, !PS), punct(";", Src, _, !PS) then Out = equality(Id, Val)
  else parse_action(Src, Id, Vals, !PS), punct(";", Src, _, !PS), Out = action(Id, Vals).

:- pred parse_identifier(src::in, identifier::out, ps::in, ps::out).
parse_identifier(Src, Out, !PS) :-
  parsing_utils.identifier("abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyz", Src, Out, !PS).

:- pred parse_equality(src::in, identifier::out, value::out, ps::in, ps::out) is semidet.
parse_equality(Src, A, B, !PS) :-
  parse_identifier(Src, A, !PS),
  punct("==", Src, _, !PS),
  int_literal(Src, Int, !PS),
  B = int_value(Int).
  
:- pred parse_action(src::in, identifier::out, list(value)::out, ps::in, ps::out) is semidet.
parse_action(Src, Identifier, Values, !PS) :-
  parse_identifier(Src, Identifier, !PS),
  brackets("(", ")", comma_separated_list(parse_value), Src, Values, !PS).

:- pred parse_value(src::in, value::out, ps::in, ps::out) is semidet.

parse_value(Src, Out, !PS) :-
  if parse_identifier(Src, Id, !PS)
  then Out = identifier_value(Id)
  else int_literal(Src, Int, !PS), Out = int_value(Int).
