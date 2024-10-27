s = input("Enter a string: ")

frequency_dict = {}
for char in s:
        if char in frequency_dict:
            frequency_dict[char] += 1
        else:
            frequency_dict[char] = 1
print("Character frequencies:")
for char, frequency in frequency_dict.items():
    print(f"{char}: {frequency}")