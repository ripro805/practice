import numpy as np

def gauss_seidel(A, b, max_iter=50, tol=1e-6):
    """
    Solves Ax = b using Gauss-Seidel method
    """
    n = len(b)
    x = np.zeros(n)  # Initial guess
    
    print("\nIteration Process:")
    for iteration in range(max_iter):
        x_old = x.copy()
        
        print(f"\nIteration {iteration + 1}:")
        for i in range(n):
            sigma = 0
            for j in range(n):
                if j != i:
                    sigma += A[i,j] * x[j]
            x[i] = (b[i] - sigma) / A[i,i]
            print(f"x{i+1} = {x[i]:.6f}", end="  ")
        
        # Check for convergence
        if np.linalg.norm(x - x_old) < tol:
            print(f"\n\nConverged after {iteration + 1} iterations")
            break
    
    return x

# Input handling (matches your style)
print("ENTER THE NUMBER OF EQUATIONS = ", end="")
n = int(input())

print("ENTER THE COEFFICIENTS OF EQUATIONS:")
a = []
for _ in range(n):
    row = list(map(float, input().split()))
    a.append(row)

print("ENTER THE RIGHT-HAND SIDE VALUES:")
b = list(map(float, input().split()))

A = np.array(a, dtype=float)
b = np.array(b, dtype=float)

# Check if matrix is diagonally dominant
diag_dominant = True
for i in range(n):
    if abs(A[i,i]) <= sum(abs(A[i,j]) for j in range(n) if j != i):
        diag_dominant = False
        break

if not diag_dominant:
    print("\nWarning: Matrix is not diagonally dominant - convergence not guaranteed")

# Solve using Gauss-Seidel
try:
    x = gauss_seidel(A, b)
    print("\nSOLUTION OF GIVEN SYSTEM:")
    for i in range(n):
        print(f"x{i+1} = {x[i]:.6f}")  # Showing full precision
except Exception as e:
    print(f"\nError: {str(e)}")