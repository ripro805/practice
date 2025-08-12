# Lagrange Interpolation Method

# Read number of records
n = int(input("How many record you will be enter: "))

# Lists to store x and f(x) values
x_vals = []
f_vals = []

# Read x and f(x) values like the picture format
for i in range(n):
    x_i = float(input(f"Enter the value of x{i}: "))
    f_i = float(input(f"Enter the value of f(x{i}): "))
    x_vals.append(x_i)
    f_vals.append(f_i)

# Read the value of X to find f(X)
x = float(input("Enter X for finding f(x): "))

# Initialize sum
sum_val = 0

# Lagrange interpolation calculation
for i in range(n):
    prod_func = 1
    for j in range(n):
        if j != i:
            prod_func *= (x - x_vals[j]) / (x_vals[i] - x_vals[j])
    sum_val += f_vals[i] * prod_func

# Display result like in the picture
print(f"\n f({x}) = {sum_val:.6f}")
