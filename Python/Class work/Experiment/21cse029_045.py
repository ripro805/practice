def flatten_list(nstd_l):
    flat_list = []  # Use a different name for the list variable
    for subl in nstd_l:
        if isinstance(subl, list):
            flat_list.extend(flatten_list(subl))  # Call the function with the correct name
        else:
            flat_list.append(subl)
    return flat_list

nested_list = [1, [2, 3], [4, [5, 6]], 7, [8, 9, [10, 11, [12, 13]]]]

flat_list = flatten_list(nested_list)
print("Flattened List:", flat_list)
