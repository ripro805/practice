n=int(input())
if n<0:
    n*=-1
digit=0

while n>0:
    n//=10
    digit+=1
print(digit)    
    