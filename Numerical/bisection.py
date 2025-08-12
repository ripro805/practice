def f(x):
    return x**3 - x - 2  

x1 = float(input("Enter the value of x0: "))
x2 = float(input("Enter the value of x1: "))
E = float(input("Enter stopping criterion E (tolerance): "))

f1 = f(x1)
f2 = f(x2)

if f1 * f2 > 0:
    print("Invalid initial guesses! They do not bracket a root.")
else:
    iteration = 0
    while True:
        iteration += 1
        x0 = (x1 + x2) / 2
        f0 = f(x0)

        print(f"Iteration {iteration}: x1 = {x1:.6f}, x2 = {x2:.6f}, x0 = {x0:.6f}, f(x0) = {f0:.6f}")

        if f0 == 0:
            print(f"Root found exactly at x = {x0:.6f}")
            break

        if f1 * f0 < 0:
            x2 = x0
            f2 = f0
        else:
            x1 = x0
            f1 = f0

        if abs((x2 - x1) / x2) < E:
            root = (x1 + x2) / 2
            print(f"Root found approximately at x = {root:.6f} with stopping criterion met.")
            break
