#Guess the Number

import random

target=random.randint(1,100)

while True:
    userChoice=int(input("Guess the target: "))
    if(userChoice==target):
        print("Success:Correct Guess!!")
        break
    elif(userChoice<target):
        print("your number was small")
    else:
        print("Your number was large")    
    
print("----Game Over----")    