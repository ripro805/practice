def set_operations(a, b, c):

    intersection = a.intersection(b)
    print("Intersection of A and B:")
    print(intersection or "No common elements found.")

    union = b.union(c)
    print("Union of B and C:")
    print(union)

    difference = c.difference(a)
    print("Difference between C and A:")
    print(difference or "No elements found in C that are not in set A.")


set1 = {1, 2, 3}
set2 = {2, 3, 4}
set3 = {3, 4, 5}

set_operations(set1, set2, set3)
