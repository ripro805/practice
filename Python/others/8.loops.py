#1
i=1
while i<=100:
    print(i)
    i+=1

#2    
    j=100
while j>=1:
    print(j)
    j-=1
    
#3.multiplication table
n=int(input("n :")) 
k=1
while k<=10:
    print(n*k)
    k+=1   
    

#4 square number
l=1
while l<=10:
    print(l*l)
    l+=1       
    
    
#5.print list using loop
num=[1,4,9,16,25,36,49,64,81,100] 
indx=0
while indx<=len(num)-1:
    print(num[indx])
    indx+=1
 
 
    
#6.searching number using loop
num=[1,4,9,16,25,36,49,64,81,100]
x=int(input("x= ")) 
idx=0
while idx<=len(num)-1:
    if(num[idx]==x):
        print("Found at idx: ",idx)
    idx+=1
    
    #list in python   for el in list or tup:
for val in num:
    print (val)
    
else:
    print("End") #this else is optional 
    
    
    str="Ripro"
    for char in str :
        if(char=='p'):
            print("p found")
            break
        
        print(char)
    else:
        print("End")
     
     
     
     #7.searching number using loop
nums=[1,4,9,16,81,25,36,49,64,81,100]
x=int(input("x= ")) 
idx=0
for el in nums:
    if(el==x):
        print("Found at idx: ",idx)
    idx+=1
    
    

  
    