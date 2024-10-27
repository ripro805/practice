import numpy as np 
A=np. array ([[4,2],[1,3]])


Q,sigma,Vt=np.linalg.svd(A)

Sigma=np.diag(sigma)


A2=np.dot(Q,np.dot(Sigma,Vt))


print("Orginal Matrix:")
print(A)

print("\nLeft Singular Vector:")
print(Q)

print("\n Singular value:")
print(Sigma)

print("\nRight singular Vector:")
print(Vt)

print("Reconstructed Matrix:")
print(A2)