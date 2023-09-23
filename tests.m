:- module tests.
:- interface.
:- import_module io.
:- pred main(io::di, io::uo) is det.
:- implementation.
:- import_module maybe.


:- import_module string.
:- import_module list.
:- import_module solutions.
:- import_module exception.
:- use_module yoox.

:- type testFailure == string.

:- pred assert_parses_to(string::in, string::in, testFailure::out) is semidet.
assert_parses_to(Input, Expected, Failure) :-
  promise_equivalent_solutions [Parsed] yoox.parse(Input, Parsed),
  Actual = string.string(Parsed),
  ( if Expected = Actual
    then fail
    else Failure = Actual ++ "should have been" ++ Expected
  ).

:- pred tests(testFailure::out) is nondet.
tests(F) :- assert_parses_to("
count == 0;
increment();
count == 1;
decrement();
count == 0;","ok(program([equality(\"count\", int_value(0)), action(\"increment\", []), equality(\"count\", int_value(1)), action(\"decrement\", []), equality(\"count\", int_value(0))]))", F).

main(!IO) :-
  Failures = solutions(tests),
  (Failures = [] -> io.write_string("Success!\n", !IO);
  io.write_string("Failure!\n" ++ join_list("\n", Failures), !IO)).
