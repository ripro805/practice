def Union_set(A, B):
    union = A.union(B)
    return union


set1 = {1, 2, 3, 4}
set2 = {3, 4, 5, 6}
union_set = Union_set(set1, set2)
print(union_set)
