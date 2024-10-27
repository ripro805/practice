def sum_of_digits(n):
    
    if n < 10:
        return n
    
    return n % 10 + sum_of_digits(n // 10)


number = int(input("Enter an integer to get the sum of its digits: "))
result = sum_of_digits(number)
print(f"The sum of the digits of {number} is: {result}")
