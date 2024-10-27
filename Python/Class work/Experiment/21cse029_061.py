nested_list = [
    [1, 2, 3],
    [4, 5],
    [6, 7, 8, 9],
    [10],
    [11, 12, 13]
]
nested_list.sort(key=len)
print("Sorted Nested List based on sublist lengths:", nested_list)
