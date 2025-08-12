# Newton's Divided Difference Interpolation

# Step 1: Read inputs
n = int(input("How many record you will be enter: "))
x = []
f = [[0 for _ in range(n)] for _ in range(n)]  # table for divided differences

# Reading x and f(x)
for i in range(n):
    xi = float(input(f"Enter the value of x{i}: "))
    fi = float(input(f"Enter the value of f(x{i}): "))
    x.append(xi)
    f[i][0] = fi  # first column is f(x)

# Step 2: Build divided difference table
for j in range(1, n):  # column
    for i in range(n - j):  # row
        f[i][j] = (f[i+1][j-1] - f[i][j-1]) / (x[i+j] - x[i])

# Step 3: Evaluate for given value
xp = float(input("Enter x for finding f(x): "))        

# Step 4: Show table
print("\n_____________________________________________")
print("   x       f(x)")
print("_____________________________________________")
for i in range(n):
    print(f"{x[i]:<6} ", end="")
    for j in range(n - i):
        print(f"{f[i][j]:<8.0f}", end=" ")
    print()
print("_____________________________________________\n")



# Newton's formula
result = f[0][0]
prod = 1
for j in range(1, n):
    prod *= (xp - x[j-1])
    result += f[0][j] * prod

print(f"\n* * * x = {result:.0f} * * *")
