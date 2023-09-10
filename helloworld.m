:- module helloworld.
:- interface.

:- import_module io.
:- pred main(io::di, io::uo) is cc_multi.


:- implementation.

% :- import_module list.
% :- import_module maybe.
% :- import_module pair.
% :- import_module string.
% :- import_module html.
% :- import_module map.
% :- import_module cgi.

% :- pred handler(cgi.request::in, cgi.response::out, io::di, io::uo) is det.
% handler(Req, Out, !IO) :-
%   Out = cgi.success_resp(render(
%       concat([
%           script("https://unpkg.com/htmx.org@1.9.5"),
%           h1("Hello Richard"), 
%           h2("Thank you for visiting me again"),
%           pre(body(Req)),
%           form("/foobarr", [
%             attribute("method", "post"),
%             attribute("ContentType", "application/json")
%           ],  [
%             hiddenInput("hiddenFieldName", "hiddenFieldValue"),
%             button("Submit", [attribute("type", "submit")])
%           ])
%       ])
%   )).
  
% main(!IO) :-
%   cgi.process(handler, !IO).

% <program> ::= <statement>*
% <statement> ::= <identifier> == <value> | <identifier>(<value_list>);
% <value_list> ::= <value> | <value> ',' <value_list>
% <value> ::= <integer> | <identifier>
% <identifier> ::= <letter> (<letter> | <digit>)*
% <integer> ::= <digit>+
% <digit> ::= 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
% <letter> ::= a | b | c | ... | z | A | B | C | ... | 
:- import_module parsing_utils.
:- import_module pretty_printer.
:- import_module list.

:- type program ---> program(list(statement)).

:- type statement --->
      assignment(identifier, value) ;
      function_call(identifier, list(value)).

:- type value --->
      integer(int) ;
      identifier(string).

:- type identifier == string.



:- pred parser(src::in, program::out, ps::in, ps::out) is semidet.
parser(Src, Out, !PS):- 
  fail_with_message("You suck", Src, Out, !PS).
  

main(!IO) :-               
  io.read_named_file_as_string("./counter.ux", ReadResult, !IO),
  ( if ReadResult = ok(Input) then
      parse(Input, parser, Parsed),
      io.write_line(Parsed, !IO)
    else io.write_line("Uh oh", !IO)).
  