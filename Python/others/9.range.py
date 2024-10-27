#range(start,stop,step)
for i in range(10):#range stop
    print(i)

for j in range (2,10): #range (start,stop)
    print(j)
    
for k in range (2,10,3):
    print(k)    
    
#odd number
for l in range (3,100,2):
    print(l) 
    
#1-100
for m in range (1,101):
    print(m)
    
#100-1
for n in range (100,0,-1):
    print(n)                
          
#multiplication table
n=int(input())
for o in range (1,11):
    print(n*o) 
    
    
#we  use Pass for skipping loop
for y in   range (5):
    pass
print("some useful work")


#print the some of n numbers for
n=int(input())
sum=0
for h in range(1,n+1):
    sum+=h
print(sum)  


#while
a = int(input())
sum_val = 0
g = 1

while g <= a:
    sum_val += g
    g += 1

print(sum_val)

#factorial
b= int(input())
result = 1

for f in range(1, b + 1):
    result *= f

print(result)

#factorial in while

n = int(input())
result = 1
s=1
while s<=n: 
    result *= s
    s+=1

print(result)



    
               