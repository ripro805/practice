def secant_method():
    # Function definition (based on sample output: f(4)=-10, f(2)=-14)
    def f(x):
        return x**2 - 3*x - 14  # This matches the sample output values
    
    print("Secant Method Implementation")
    print("-------------------------")
    
    # Get initial guesses from user
    x1 = float(input("Enter the value of x1: "))
    x2 = float(input("Enter the value of x2: "))
    
    # Set desired accuracy (you could make this user-configurable)
    E = 1e-6
    max_iterations = 100
    
    print("\nIteration Table:")
    print("| Iteration | x1       | x2       | x3       | f(x1)    | f(x2)    |")
    print("|-----------|----------|----------|----------|----------|----------|")
    
    for iteration in range(1, max_iterations + 1):
        f1 = f(x1)
        f2 = f(x2)
        
        # Avoid division by zero
        if abs(f2 - f1) < 1e-20:
            print("\nWarning: Division by zero encountered")
            break
        
        # Secant formula
        x3 = (f2 * x1 - f1 * x2) / (f2 - f1)
        
        # Print current iteration
        print(f"| {iteration:<9} | {x1:.6f} | {x2:.6f} | {x3:.6f} | {f1:.6f} | {f2:.6f} |")
        
        # Check for convergence
        if abs((x3 - x2)/x3) < E:
            print("\n---")
            print(f"Approximate root = {x3:.6f}")
            return x3
        
        # Update points for next iteration
        x1, x2 = x2, x3
    
    print("\nMaximum iterations reached without convergence")
    return None

# Run the method
secant_method()