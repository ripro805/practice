#sum return type function
def cal_sum(a,b):
    return a+b
print(cal_sum(2,3))
print(cal_sum(6,3))
print(cal_sum(78,3))

#doesn't have return type
def Greet():
    print("Hello")
    
Greet()

output=Greet()
print(Greet()) #none returnable function gives None value in it's output



#avg of 3 numbers
def Calc_avg(a,b,c):
    avg=(a+b+c)/3
    print(avg)
    return avg
x, y, z=map(int,input().split())
Calc_avg(x, y, z)



#print the length of a list
cities=["dhaka","kushtia","feni","khulna"]
heros=["ironman", "thor", "captain"]

def length(cities):
    print(len(cities))

length(cities)
length(heros) 


#print the element of a list in a single line 
 
def print_list(heros):
     for item in heros:
         print(item,end=" ")#end=" " is using for quiting the next line

print_list(heros)
print()
print_list(cities)
print()


#print the factorial of n

def fact(n):
    result=1
    for num in range(1, n+1):
        result=result*num
    print(result)    
    return(result)
    
    
fact(3) 


#convert usd to bdt

def converter(usd):
    bdt=usd*109.50
    print(usd,"USD=",bdt,"BDT")

converter(5)  


#odd even

def num(a):
    if a%2==0 :
      print("Even")
    else:
        print("Odd")


num(5)          
         
        