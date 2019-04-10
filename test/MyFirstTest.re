open TestFramework;
open Lib.Main

describe("handle primitives", ({test}) => {
  test("int", ({expect}) => {
    let s = "(+ 2 2)"
    let lambda = createLambdaIR(s)
    let ast = sexpToAST(lambda)
    switch(ast) {
    | Atom(a) => expect.string(a).toMatch("NOPE")
    | Tuple(a, _, _) => expect.string(a).toMatch("YES")
    }
  });
});
