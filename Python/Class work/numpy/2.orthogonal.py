import numpy as np 
import math 
m1=np.array([[0,-1],[1,0]])
m2=np.transpose(m1)
print (m2)

m3=np.matmul(m1,m2)
print(m3)


i = np.identity(m3.shape[0])


if np.allclose(m3, i):
    print("\nm1 is an orthogonal matrix.")
else:
    print("\nm1 is not an orthogonal matrix.")