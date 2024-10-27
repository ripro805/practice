a,b,c=map(float,input().split())
if a==b==c:
    print("Equilateral")
elif a==b or a==c or b==c:
    print("Isosceles")
else:
    print("scalene")        