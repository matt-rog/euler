# https://projecteuler.net/problem=1
# Find the sum of all the multiples of 3 or 5 below 1000.
sum = Enum.reduce(Enum.to_list(1..999), 0, fn num, sum ->
  if rem(num, 3) == 0 or rem(num, 5) == 0, do: num+sum, else: 0
end)
IO.puts sum
