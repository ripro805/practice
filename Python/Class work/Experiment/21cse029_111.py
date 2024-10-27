def factorial(n):
    if n == 1:
        return 1
    return n * factorial(n-1)

n = int(input("ENter the number: "))
res = factorial(n)
print(f"Factorial of {n} is {res}.")

    