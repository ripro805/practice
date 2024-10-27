def flatten_list(nested_list):
    flat_list = []
    for sublist in nested_list:
        if isinstance(sublist, list):
            flat_list.extend(flatten_list(sublist))
        else:
            flat_list.append(sublist)
    return flat_list
nested_list = [[1, 2, 3], [2, 3, 4, 5], [3, 4, 5, 6]]

flat_list = flatten_list(nested_list)

frequency = {}
for element in flat_list:
    frequency[element] = frequency.get(element, 0) + 1
for element, count in frequency.items():
    print(f"{element}: {count}")
