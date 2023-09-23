:- module tests.

:- interface.
:- import_module io.
:- pred main(io::di, io::uo) is det.
:- implementation.
:- import_module maybe.

%%% Test yoox serialization
:- func counter = string.
counter = "
count == 0;
increment();
count == 1;
decrement();
count == 0;".

:- func serialized = string. 

serialized = "ok(program([equality(\"count\", int_value(0)), action(\"increment\", []), equality(\"count\", int_value(1)), action(\"decrement\", []), equality(\"count\", int_value(0))])) ue".

:- import_module string.
:- use_module yoox.

:- import_module solutions.
:- import_module list.
:- import_module unit.

:- pred test_yoox_serialization is semidet.
test_yoox_serialization :- 
  ( solutions(yoox.parse(counter), []), fail;
    solutions(yoox.parse(counter), [X|_]), string(X) = serialized
  ).



main(!IO) :-
  if test_yoox_serialization
  then io.write_string("Success!\n", !IO)
  else io.write_string("Failure!\n", !IO).
