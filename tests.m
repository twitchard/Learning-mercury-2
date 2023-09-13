:- module tests.

:- interface.
:- import_module io.
:- pred main(io::di, io::uo) is det.
:- implementation.
:- import_module string.
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

serialized = "ok(program([equality(\"count\", int_value(0)), action(\"increment\", []), equality(\"count\", int_value(1)), action(\"decrement\", []), equality(\"count\", int_value(0))]))".

:- import_module string.
:- use_module yoox.

:- pred test_yoox_serialization(io::di, io::uo) is nondet.
test_yoox_serialization(!IO) :-
  yoox.parse(counter, Parsed),
  serialized = string.string(Parsed).

main(!IO) :-
  pred_to_maybe(test_yoox_serialization)(!IO).
