mat = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

diagonal_sum = sum(mat[i][i] for i in range(len(mat)))

print("Sum of elements in the main diagonal:", diagonal_sum)
