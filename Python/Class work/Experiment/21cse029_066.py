nested_list = [
    [1, 2, 3],
    [4, 5],
    [6, 7, 8, 9],
    [10, 11, 12]
]

max_el = float('-inf')

for subl in nested_list:
    for num in subl:
        if num > max_el:
            max_el = num
print("Maximum element in the nested list:", max_el)
