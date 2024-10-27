def Fibonacci(n):
    
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        
        return Fibonacci(n - 1) + Fibonacci(n - 2)


n = int(input("Enter an integer n to get the nth Fibonacci number: "))
result = Fibonacci(n)
print(f"The {n}th Fibonacci number is: {result}")
