import random
x = random.randint(1,100)
while(1):
    n = int(input("Enter a number: "))
    if n==x:
        print("Congrats You have guessed the right number.")
        break
    elif n<x:
        print("Think bigger. ")
        continue
    else :
        print("Think smaller.")
        continue