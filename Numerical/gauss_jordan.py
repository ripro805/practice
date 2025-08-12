def print_matrix(mat, step):
    print(f"\nStep {step}:")
    for row in mat:
        print(" ".join(f"{x:8.3f}" for x in row))
    print()

def gauss_jordan(a):
    n = len(a)
    step = 1
    for col in range(n):
        pivot = a[col][col]
        if pivot == 0:
            print("Zero pivot encountered. Try partial pivoting.")
        a[col] = [x / pivot for x in a[col]]

        for r in range(n):
            if r != col:
                factor = a[r][col]
                a[r] = [a[r][c] - factor * a[col][c] for c in range(n+1)]

        print_matrix(a, step)
        step += 1

    return [a[i][n] for i in range(n)]


n = int(input("Enter the number of equations: "))
print("Enter the coefficient of equation:")
A = []
for _ in range(n):
    row = list(map(float, input().split()))
    if len(row) != n + 1:
        raise ValueError("Each row must have n+1 values")
    A.append(row)

solution = gauss_jordan(A)

print("\nSolution of given system:")
for i, val in enumerate(solution, 1):
    print(f"x{i} = {val:.6f}")
