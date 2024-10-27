def Symmetric_difference(A, B):
    symmetric_diff = A.symmetric_difference(B)
    return symmetric_diff


set1 = {1, 2, 3, 4}
set2 = {3, 4, 5, 6}
symmetric_diff = Symmetric_difference(set1, set2)
print(symmetric_diff)
