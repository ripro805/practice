age=21
if(age>=18):
    print("Can vote ")
    print("Can Drive")
    
    light='yellow'
    if(light=='green'):
        print("go")
    elif(light=='red'):
        print("stop")
    else:
        print("look")        
        
        """indentation:
        means proper spacing which we use
        in conditional statements"""
        
#nesting 
age=34
if(age>=18):
    if(age>=80):
        print("cannot drive")
    else:
        print("can drive")
else:
    print("cannot drive")  
    
    
    #check the number is odd or even          
number=int(input("Enter the number: "))
if (number%2==0):
        print("It's a even number")
else:
        print("It's a odd number")
        
#check the grater number 
a=int(input())
b=int(input())
c=int(input())

if(a>b):
    print("a is greater than b")
elif(b>c):
    print("b is greater than c")
else:
    print("c is greater than a")
    
#check the number multiple by 7

num=int (input())
if(num%7==0):
    print("It's multiple of 7")
else:
    print("It's not multiple of 7")       
                   
            