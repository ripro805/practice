def newton_raphson():
    # Input the polynomial coefficients
    n = int(input("ENTER THE TOTAL NO. OF POWER: "))
    coeff = []
    for i in range(n+1):
        c = float(input(f"    x^{i}:: "))
        coeff.append(c)
    
    # Display the polynomial
    poly_str = "    THE POLYNOMIAL IS :: :"
    for i in range(n, -1, -1):
        if coeff[i] != 0:
            sign = "+" if coeff[i] > 0 and i != n else ""
            poly_str += f" {sign}{coeff[i]}x^{i}"
    print(poly_str)
    
    # Input initial guess
    x1 = float(input("    INITIAL X1--->"))
    tol = 1e-6  # Default tolerance
    
    print("\n" + "*"*55)
    print("    ITERATION    X1        FX1        F'X1")
    print("*"*55)
    
    for iteration in range(1, 100):  # Max 100 iterations
        # Calculate f(x1) and f'(x1)
        fx1 = 0
        fpx1 = 0
        for i in range(len(coeff)):
            fx1 += coeff[i] * (x1**i)
            if i > 0:
                fpx1 += i * coeff[i] * (x1**(i-1))
        
        # Print current iteration
        print(f"    {iteration:<9} {x1:.3f}   {fx1:.3f}   {fpx1:.3f}")
        
        # Check for convergence
        if abs(fx1) < tol:
            break
            
        # Newton-Raphson update
        if fpx1 == 0:
            print("    Zero derivative. No solution found.")
            return
        x1 = x1 - fx1/fpx1
    
    print("\n" + "*"*55)
    print(f"    THE ROOT OF EQUATION IS {x1:.6f}")

# Run the method
newton_raphson()