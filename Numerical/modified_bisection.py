def polynomial(x, coefficients):
    """Evaluate polynomial with given coefficients at x."""
    return sum(coef * x**power for power, coef in enumerate(reversed(coefficients)))

def find_roots(max_power, coefficients, lower, upper, delta_x=0.1, tolerance=1e-5):
    """Find all roots of polynomial between lower and upper limits."""
    roots = []
    x1 = lower
    x2 = x1 + delta_x
    
    while x2 <= upper:
        f1 = polynomial(x1, coefficients)
        f2 = polynomial(x2, coefficients)
        
        # Check if we've bracketed a root
        if f1 * f2 < 0:
            # Perform bisection to refine the root
            while abs((x2 - x1)/x2) >= tolerance:
                x0 = (x1 + x2) / 2
                f0 = polynomial(x0, coefficients)
                
                if f1 * f0 < 0:
                    x2 = x0
                    f2 = f0
                else:
                    x1 = x0
                    f1 = f0
            
            root = (x1 + x2) / 2
            roots.append(root)
            print(f"Between {x1:.5f} and {x2:.5f} there is a root {root:.5f}")
        
        # Move to next interval
        x1 = x2
        x2 = x1 + delta_x
    
    return roots

def main():

    
    try:
        max_power = int(input("Enter the maximum power: "))
        coefficients = list(map(float, input("Enter the coefficients (from maximum power): ").split()))
        lower, upper = map(float, input("Enter the lower and upper limit: ").split())
        
        if len(coefficients) != max_power + 1:
            print("Error: Number of coefficients must match maximum power + 1")
            return
        
        roots = find_roots(max_power, coefficients, lower, upper)
        
        if not roots:
            print("No roots found in the specified interval.")
        else:
            print("\nFound roots:", [f"{root:.5f}" for root in roots])
    
    except ValueError:
        print("Error: Invalid input format. Please enter numbers only.")

if __name__ == "__main__":
    main()