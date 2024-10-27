n=int(input())
fib=[0,1]
for i in range (2,n):
    fibo=fib[-1]+fib[-2]
    
    fib.append(fibo)
print(fib)    