marks=float(input())

if marks<0 or marks>100:
    print("Invalid")
elif marks>=90 or marks==100:
    print("A+")
elif marks>= 80:
    print("A")
elif marks>=70:
    print("B") 
elif marks>=60:
    print("c")
else:
    print("Fail")               