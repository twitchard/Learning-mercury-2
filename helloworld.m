% vim: ft=mercury

:- module helloworld.
:- interface.

:- import_module io.
:- pred main(io::di, io::uo) is cc_multi.


:- implementation.

:- import_module list.
:- use_module yoox.
:- use_module parsing_utils.

main(!IO) :-               
  io.read_named_file_as_string("./counter.ux", ReadResult, !IO),
  ( if ReadResult = ok(Input) then
      parsing_utils.parse(Input, yoox.parse_program, Parsed),
      io.write_line(Parsed, !IO)
    else io.write_line("Uh oh", !IO)).
  
