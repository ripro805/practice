def newton_method():
    # Get polynomial details
    n = int(input("Enter the degree of the equation: "))
    coefficients = list(map(float, input("Enter the coefficients of the equation:").split()))
    
    # Reverse coefficients to get [a_n, a_n-1, ..., a_0]
    coefficients = coefficients[::-1]
    
    roots = []
    current_poly = coefficients.copy()
    current_degree = n
    
    while current_degree > 0:
        # Initial guess - better for larger roots first
        x0 = 5.0 if not roots else -5.0
        
        # Newton-Raphson iteration
        xr = x0
        for _ in range(100):  # Max iterations
            # Calculate f(x) and f'(x)
            fx = 0
            f_prime_x = 0
            for i in range(len(current_poly)):
                power = current_degree - i
                fx += current_poly[i] * (xr ** power)
                if power > 0:
                    f_prime_x += power * current_poly[i] * (xr ** (power - 1))
            
            if abs(f_prime_x) < 1e-10:
                xr += 0.1
                continue
                
            new_xr = xr - fx / f_prime_x
            
            if abs(new_xr - xr) < 1e-6:
                break
            xr = new_xr
        
        # Store the root
        roots.append(xr)
        
        # Deflate the polynomial (synthetic division)
        new_poly = [current_poly[0]]
        for i in range(1, current_degree):
            new_poly.append(new_poly[-1] * xr + current_poly[i])
        
        current_poly = new_poly
        current_degree -= 1
    
    # Sort roots by absolute value (largest first)
    roots.sort(reverse=True, key=abs)
    
    # Print results in required format
    for i, root in enumerate(roots, 1):
        print(f"RootNo.{i}  {root:.5f}")

# Run the program2

newton_method()