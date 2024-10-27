nested_list = [
    [1, 2, 3],
    [4, 5],
    [6, 7, 8, 9],
    [10]
]


flat_list = []
for subl in nested_list:
    flat_list.extend(subl)
print("Concatenated Flat List:", flat_list)
