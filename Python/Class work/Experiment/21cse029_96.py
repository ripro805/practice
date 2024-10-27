sum = 0
while True:
    n = int(input("Enter a positive number: "))
    if(n<0):
        break
    sum += n
    
print(f"Sum of the all positive number that was entered is: {sum}")