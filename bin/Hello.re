Console.log("Running Test Program:");
let s = "(s (a 123))"
let () = Console.log(Lib.Main.createLambdaIR(s))
