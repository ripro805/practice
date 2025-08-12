"""Find all roots of polynomial between lower and upper limits.
    
    Args:
        max_power: Highest degree of the polynomial
        coefficients: List of coefficients from highest to lowest power
        lower: Lower bound of search interval
        upper: Upper bound of search interval
        delta_x: Step size for initial search (default: 0.1)
        tolerance: Relative error tolerance for convergence (default: 1e-5)
    
    Returns:
        List of roots found in the interval
    """