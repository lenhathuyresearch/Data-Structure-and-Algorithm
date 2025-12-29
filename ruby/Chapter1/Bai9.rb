# T(n) = O(2^n)

def f(n)
  return n if n < 2
  f(n - 1) + f(n - 2)
end

printf("Số Fibonacci thứ 10 là %d\n", f(10))

# T(n) = O(1)
def fibonancci (n)
  return n if n < 2
  a, b = 0, 1
  (2..n).step(1) do
    a, b = b, a + b
  end
  b
end

puts "Số Fibonacci thứ 20 là #{fibonancci(20)}"

