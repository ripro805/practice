def is_prime(num):
    if num <= 1:
        return False
    elif num == 2:
        return True
    elif num % 2 == 0:
        return False
    else:
        for i in range(3, int(num**0.5) + 1, 2):
            if num % i == 0:
                return False
        return True

prime_numbers = []

for num in range(1, 1001):
    if is_prime(num):
        prime_numbers.append(num)

print("Prime numbers between 1 to 1000 are:", prime_numbers)
