a ,b ,c=map(int,input( ).split())
if a>=b and a>=c:
    largest=a
elif b>=a and  b>=c:
    largest=b
else:
    largest=c
    
print("The largest number among",a,",",b,"and",c, "is :",largest)           