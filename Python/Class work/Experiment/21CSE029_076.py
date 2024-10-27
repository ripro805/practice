def is_superset(A, B):
    return A.issuperset(B)

A = {1, 2, 3, 4, 5}
B = {2, 3}

result = is_superset(A, B)

if result:
    print("Set A is superset of set B")
else:
    print("Set A is not  superset of set B")
