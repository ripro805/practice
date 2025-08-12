# Linear Regression - Fitting a Straight Line
n = int(input("Enter how many values you want for (x, y): "))

# Reading data values
x = list(map(float, input("Enter value for x: ").split()))
y = list(map(float, input("Enter value for y: ").split()))

if len(x) != n or len(y) != n:
    print("Error: Number of inputs does not match n")
    exit()

# Initialize sums
sum_x = sum_y = sum_x2 = sum_xy = 0

print("\n xi   yi   xi*xi   xi*yi")
for i in range(n):
    xi2 = x[i] ** 2
    xiyi = x[i] * y[i]
    print(f"{x[i]:<4} {y[i]:<4} {xi2:<6} {xiyi}")
    sum_x += x[i]
    sum_y += y[i]
    sum_x2 += xi2
    sum_xy += xiyi

# Print sums
print("-" * 30)
print(f"Sum = {sum_x}  {sum_y}  {sum_x2}  {sum_xy}")

# Check denominator for b
denominator = (n * sum_x2 - sum_x ** 2)
if denominator == 0:
    print("Error: Denominator for b is zero. Cannot compute.")
    exit()

# Compute slope (b) and intercept (a)
b = (n * sum_xy - sum_x * sum_y) / denominator
a = (sum_y - b * sum_x) / n

# Output equation
print(f"\nThe equation is: y = {a:.1f} + {b:.1f}x")
