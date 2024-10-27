n = int(input("Enter the number: "))
flag = True
for i in range(2,n):
    if n % i == 0:
        flag = False
        break

if flag ==1 and n>1 :
    print(f"{n} is a prime number.")
else:
    print(f"{n} is  not a prime number.")