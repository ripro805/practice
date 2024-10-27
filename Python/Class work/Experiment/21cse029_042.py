num = [1, 2, 3, 2, 4, 3, 5, 6, 5]
unq_num = []
for n in num:
    if n not in unq_num:
        unq_num.append(n)

print("List after removing duplicates:", unq_num)
