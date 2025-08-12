import numpy as np

# Step 1 & 2: Read inputs
n = int(input("Enter how many values you want for (x, y): "))
x_vals = list(map(float, input("Enter value for x: ").split()))
y_vals = list(map(float, input("Enter value for y: ").split()))

# Automatically set order to n-1
mp = n - 1
m = mp + 1

# Step 5 & 6: Build matrices C and B
C = np.zeros((m, m))
B = np.zeros(m)

for row in range(m):
    for col in range(m):
        C[row][col] = sum(x ** (row + col) for x in x_vals)
    B[row] = sum(y * (x ** row) for x, y in zip(x_vals, y_vals))

# Step 7: Solve for coefficients a1..am
a = np.linalg.solve(C, B)

# Step 8: Print coefficients without tiny terms
print("\nThe equation is: y =", end=" ")
terms = []
tolerance = 1e-8  # Threshold to treat as zero
for i, coef in enumerate(a):
    if abs(coef) < tolerance:
        continue  # skip negligible coefficients
    if i == 0:
        terms.append(f"{coef:.2f}")
    elif i == 1:
        terms.append(f"{coef:.2f}x")
    else:
        terms.append(f"{coef:.2f}x^{i}")
print(" + ".join(terms))


