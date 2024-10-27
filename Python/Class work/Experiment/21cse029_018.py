import cmath


a,b,c=map(float,input().split())
discriminant=b**2-4*a*c

if discriminant>0:
    root1=(-b+((discriminant)**.5)/2*a)
    root2=(-b-((discriminant)**.5)/2*a)
    print("The roots are",root1, "and", root2)
elif discriminant==0:
    root=-b/(2*a) 
    print("The root is :",root)
else:
    realPart=-b/(2*a)
    imaginaryPart=cmath.sqrt(abs(discriminant))/(2*a)
    root1=complex(realPart,imaginaryPart)
    root2=complex(realPart,-imaginaryPart)
    print("The roots are complex:",root1,"and",root2)       