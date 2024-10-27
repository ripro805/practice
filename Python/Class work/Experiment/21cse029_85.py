int_list=[1,2,3,4,5,6,7,8,9,12,1,3,14,6,46,55]

square_dict = {num: num ** 2 for num in int_list}

print("Dictionary of squares:")
for num, square in square_dict.items():
    print(f"{num} : {square}")