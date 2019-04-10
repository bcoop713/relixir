open Sexplib


type context = string;
type pos1 = string;
type pos2 = context;
type elixirAST = 
  | Atom(string)
  | Tuple(pos1, pos2, list(elixirAST))


let createLambdaIR = (s: string) => Sexp.of_string(s)

let rec sexpToAST = (lambda: Sexp.t) => {
    switch(lambda) {
    | Atom(s) => Atom(s)
    | List(l) => Tuple("", "", List.map(sexpToAST, l))
    }
}