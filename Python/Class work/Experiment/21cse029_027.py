n = int(input())

is_prime = True
divisor = 2
if n <= 1:
    is_prime = False
while divisor * divisor <= n and is_prime:
    if n% divisor == 0:
        is_prime = False
    divisor += 1
if is_prime:
    print(n, "is a prime number.")
else:
    print(n, "is not a prime number.")
