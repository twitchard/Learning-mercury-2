:- module cgi.

:- interface.

:- import_module io.

:- type request
    --->    request(
                verb  :: string,
                url   :: string,
                body  :: string
            ).

:- type response.
    
% Function to generate a success response.
:- func success_resp(string) = response.

% Function to generate an error response.
:- func error_resp(string) = response.

% The handler predicate that processes the request and returns a response.
:- pred process(pred(request, response, io, io)::in(pred(in, out, di, uo) is det), io::di, io::uo) is det.

:- implementation.

:- import_module maybe.
:- import_module int.
:- import_module string.

:- type response
    --->    success(string)    % Success response.
    ;       error(string).     % Error response.

success_resp(X) = success(X).
error_resp(X) = error(X).


:- func get_body(response) = string.
get_body(success(X)) = "Content-Type: text/html\n\n" ++ X.
get_body(error(X)) = "Status: 500 Internal Server Error\nContent-Type: text/html\n\n" ++ X.

% Predicate to write stderr
:- pred log_err(string, io, io).
:- mode log_err(in, di, uo) is det.

log_err(Message, !IO) :-
    io.stderr_stream(StdErr, !IO),
    io.write_string(StdErr, Message ++ "\n", !IO).

% Main predicate
process(Handler, !IO) :-
    io.get_environment_var("REQUEST_METHOD", MaybeRequestMethod, !IO),
    log_err("REQUEST_METHOD: " ++ string(MaybeRequestMethod), !IO),
    io.get_environment_var("REQUEST_URI", MaybeRequestUri, !IO),
    log_err("REQUEST_URI: " ++ string(MaybeRequestUri), !IO),
    io.get_environment_var("CONTENT_LENGTH", MaybeContentLength, !IO),
    log_err("CONTENT_LENGTH: " ++ string(MaybeContentLength), !IO),
    (
        MaybeContentLength = yes(ContentLengthString),
        string.to_int(ContentLengthString, ContentLength),
        ContentLength > 0
    ->
        io.read_file_as_string(RequestBodyResult, !IO)
    ;
        RequestBodyResult = ok("")
    ),
    (
        MaybeRequestMethod = yes(RequestMethod),
        MaybeRequestUri = yes(RequestUri),
        RequestBodyResult = ok(RequestBody)
    ->
        Req = request(RequestMethod, RequestUri, RequestBody),
        Handler(Req, Out, !IO),
        log_err("WRITING SUCCESS RESPONSE: " ++ get_body(Out), !IO),
        io.write_string(get_body(Out), !IO)
    ;
        Out = error_resp("Unable to construct a request from environment variables"),
        log_err("WRITING ERROR RESPONSE", !IO),
        io.write_string(get_body(Out), !IO)
    ).