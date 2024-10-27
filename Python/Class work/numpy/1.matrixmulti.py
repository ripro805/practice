import numpy as np
import math


def get_area(x1,x2,x3):
    y1=math.sqrt((x1[0]-x2[0])**2+(x1[1]-x2[1])**2)
    y2=math.sqrt((x2[0]-x3[0])**2+(x2[1]-x3[1])**2)
    y3=math.sqrt((x3[0]-x1[0])**2+(x3[1]-x1[1])**2)
    s=(y1+y2+y3)/2
    area=math.sqrt(s*(s-y1)*(s-y2)*(s-y3))
    return area
    
#Matrix    
m1=np.array([[3,-5],[1,-3]])

#triangel-1
m2=np.array([1,1])
m3=np.array([0,0])
m4=np.array([2,0])

a1=get_area(m2,m3,m4)

print("Area-1 :",a1)
print("\n")

#convert vector for matrix multiplication
m2=np.array([[1],[1]])
m3=np.array([[0],[0]])
m4=np.array([[2],[0]])


#matrix multiplication
p1=np.matmul(m1,m2)
p2=np.matmul(m1,m3)
p3=np.matmul(m1,m4)

print("Transform points:\n",p1,p2,p3)
print("\n")

n2=p1.flatten()
n3=p2.flatten()
n4=p3.flatten()

a2=get_area(n2,n3,n4)

print("Area-2 :",a2)
print("\n")

dit=a2/a1

print ("Ratio:",dit)