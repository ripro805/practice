nested_list = [
    [1, 2, 3],
    [4, 5],
    [6, 7, 8, 9],
    [10, 11, 12]
]
even_count = 0
for subl in nested_list:
    for num in subl:
        if num % 2 == 0:
            even_count += 1
print("Number of even numbers:", even_count)
