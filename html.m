:- module html.
:- interface.
:- import_module list.
:- import_module string.

:- type attribute ---> attribute(string, string).
:- type html
    --->    empty
    ;       text(string)
    ;       element(tag, is_void, list(attribute), list(html))
    ;       concat(list(html)).
:- type is_void ---> yes ; no.
:- type tag == string.
:- func render(html) = string.
:- func h1(string) = html.
:- func h1(string, list(attribute)) = html.
:- func h2(string) = html.
:- func h2(string, list(attribute)) = html.
:- func a(string, string) = html.
:- func a(string, string, list(attribute)) = html.
:- func button(string) = html.
:- func button(string, list(attribute)) = html.
:- func pre(string) = html.
:- func pre(string, list(attribute)) = html.
:- func form(string, list(attribute), list(html)) = html.
:- func hiddenInput(string, string) = html.
:- func script(string) = html.

:- implementation.
h1(Contents) = element("h1", no, [], [text(Contents)]).
h1(Contents, Attrs) = element("h1", no, Attrs, [text(Contents)]).
h2(Contents) = element("h2", no, [], [text(Contents)]).
h2(Contents, Attrs) = element("h2", no, Attrs, [text(Contents)]).
a(Href, Contents) = element("a", no, [attribute("href", Href)], [text(Contents)]).
a(Href, Contents, Attrs) = element("a", no, [attribute("href", Href) | Attrs], [text(Contents)]).
button(Contents) = element("button", no, [], [text(Contents)]).
button(Contents, Attrs) = element("button", no, Attrs, [text(Contents)]).
pre(Contents) = element("pre", no, [], [text(Contents)]).
pre(Contents, Attrs) = element("pre", no, Attrs, [text(Contents)]).
form(Action, Attrs, Contents) = element("form", no, [attribute("action", Action) | Attrs], Contents).
hiddenInput(Name, Value) = element("input", yes, [attribute("type", "hidden"), attribute("name", Name), attribute("value", Value)], []).
script(Src) = element("script", no, [attribute("src", Src)], []).

render(empty) = "".
render(concat(HtmlList)) = string.join_list("", list.map(render, HtmlList)).
render(text(S)) = S.
render(element(Tag, yes, Args, _)) = LeftTag :-
    LeftTag = "<" ++ Tag ++ " " ++ render_attributes(Args) ++ "/>".
render(element(Tag, no, Args, Contents)) = LeftTag ++ Content ++ RightTag :-
    LeftTag = "<" ++ Tag ++ " " ++ render_attributes(Args) ++ ">",
    RightTag = "</" ++ Tag ++ ">",
    Content = string.join_list("", list.map(render, Contents)).
    

:- func render_attributes(list(attribute)) = string.

render_attributes([]) = "".
render_attributes([attribute(Key, Value) | Attrs]) =
    Key ++ "=\"" ++ Value ++ "\"" ++ Space ++ render_attributes(Attrs) :-
    Space = ( if Attrs = [] then "" else " " ).



