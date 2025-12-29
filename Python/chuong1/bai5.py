def usingfor(n):
    s = 0
    for i in range(1, n+1):
        s += i*i*i
    return s

def using_formula(n):
    return (n*(n+1)//2)**2

test = [1, 5, 10, 15, 20, 50, 100, 200, 500]

using_formula1 = [using_formula(x) for x in test]
using_for1 = [usingfor(x) for x in test]

print ("Dùng công thức")
for i in range (len(test)):
    print (f"S({test[i]}) = {using_formula1[i]}")

print ("Dùng for")
for i in range (len(test)):
    print (f"S({test[i]}) = {using_for1[i]}")
