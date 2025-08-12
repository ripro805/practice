def f(x):
    return x**3 - x - 2  # Function whose root we want to find

# Inputs
a = float(input("Enter lower guess a: "))
b = float(input("Enter upper guess b: "))
tol = float(input("Enter tolerance: "))
max_iter = 100  # Maximum iterations to prevent infinite loops

# Check if initial guesses bracket a root
if f(a) * f(b) > 0:
    print("Invalid initial guesses! f(a) and f(b) must have opposite signs.")
else:
    print("\nIter\t a\t\t b\t\t c\t\t f(c)")
    print("-" * 50)
    
    for it in range(1, max_iter + 1):
        # False Position Formula (weighted average)
        c = (a * f(b) - b * f(a)) / (f(b) - f(a))
        print(f"{it}\t{a:.6f}\t{b:.6f}\t{c:.6f}\t{f(c):.6f}")

        # Check for convergence
        if abs(f(c)) < tol:
            print(f"\nRoot found: {c:.6f}")
            break

        # Update interval
        if f(a) * f(c) < 0:
            b = c
        else:
            a = c
    else:
        print("\nMax iterations reached without convergence.")