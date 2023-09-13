:- module tests.
:- interface.
:- import_module io.
:- pred main(io::di, io::uo) is det.

:- implementation.


:- type test_result --->
  pass;
  fail(string).
  
:- import_module string.

my_test() = fail("You suck").

main(!IO) :-
  test_result(Result),
  (
    Result = pass,
    io.write_string("Test passed.\n", !IO)
  ;
    Result = fail("You failed")
    io.write_string(".\n", !IO)
  ).

:- pred test_result(test_result::out) is det.

test_result(pass). % you could change this to fail to see the fail message
