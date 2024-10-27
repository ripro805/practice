nested_list = [[1, 2, 3], [4, 5], [6, 7, 8]]
flat_list = [element for sublist in nested_list for element in sublist]
print("Flat List:", flat_list)
