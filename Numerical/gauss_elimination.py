import numpy as np

# Taking input
n = int(input("ENTER THE NUMBER OF EQUATIONS = "))

print("ENTER THE COEFFICIENTS OF EQUATIONS:")
a = []
for i in range(n):
    row = list(map(float, input().split()))
    a.append(row)

a = np.array(a)

# Forward elimination with steps
print("\nStep 1:")
for k in range(n-1):
    for i in range(k+1, n):
        factor = a[i, k] / a[k, k]
        a[i, k:] -= factor * a[k, k:]
    print(a.astype(int))  # showing integer values

print("\nStep 2:")
# Continue elimination
for k in range(1, n-1):
    for i in range(k+1, n):
        factor = a[i, k] / a[k, k]
        a[i, k:] -= factor * a[k, k:]
    print(a.astype(int))

# Back substitution
x = np.zeros(n)
for i in range(n-1, -1, -1):
    x[i] = (a[i, -1] - np.dot(a[i, i+1:n], x[i+1:n])) / a[i, i]

print("\nSOLUTION OF GIVEN SYSTEM:")
for i in range(n):
    print(f"x{i+1} = {int(x[i])}")