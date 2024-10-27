dict1 = {
    "Alice": 85,
    "Bob": 90
}

dict2 = {
    "Charlie": 78,
    "Diana": 92
}

merged_dict = dict1.copy()
merged_dict.update(dict2)

print("Merged dictionary:")
for key, value in merged_dict.items():
    print(f"{key}: {value}")