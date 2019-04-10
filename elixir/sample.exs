# docker run -it --rm --name elixir-inst1 -v "$PWD":/usr/src/myapp -w /usr/src/myapp elixir elixir your-escript.exs
IO.inspect(quote do
    defmodule Sample do
        def add2(a) do
            a + 2
        end

        def add(a, b) do
            a + b
        end
    end
end)