import numpy as np
#define a matrix
A=np.array([[4,2],[1,3]])

#calculating the eigen values and eigen vectors of A
eigenvalues,eigenvectors=np.linalg.eig(A)

#extract the eigen vectors as columns of matrix Q
Q=eigenvectors

#create diagonal matrix lambda from eigenvalues
Lambda=np.diag(eigenvalues)

#compute the inverse of Q

Q_inv=np.linalg.inv(Q)

#Reconstruct the original matrix A
A2=np.matmul(Q,np.matmul(Lambda,Q_inv))

print("Original matrix:")
print(A)

print("Eigen Values:")
print(eigenvalues)

print("\nEigen vectors:")
print(Q)

print("\nInverse Matrix:")
print(Q_inv)

print("Reconstructed Matrix:")
 