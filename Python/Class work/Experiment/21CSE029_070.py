def find_intersection(a, b):

    intersection = a.intersection(b)

    if not intersection:
        print("No common elements found b")
    else:
        print("Common elements between sets A and B:")
        for element in intersection:
            print(element)


set1 = {1, 2, 3, 4}
set2 = {2, 4, 5, 6}

find_intersection(set1, set2)
