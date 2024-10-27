def srch_el(nested_list, el):
    for i, r in enumerate(nested_list):
        for j, value in enumerate(r):
            if value == el:
                return i, j
    return None  

nested_list = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

el_to_srch = 5

post = srch_el(nested_list, el_to_srch)


if post:
    print(f"The element {el_to_srch} is found at position (row, column): {post}")
else:
    print(f"The element {el_to_srch} is not found in the nested list.")
