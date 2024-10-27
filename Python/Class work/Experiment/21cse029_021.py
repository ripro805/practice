
n = int(input())
if n < 0:
    print("Factorial is not defined for negative numbers.")
else:
    fact = 1
    i = 1
    while i <= n:
        fact *= i
        i += 1

    print("Factorial of", n, "is:", fact)
