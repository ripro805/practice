ages = {
    "Alice": 25,
    "Bob": 22,
    "Charlie": 30,
    "Diana": 27
}
sorted_ages= dict(sorted(ages.items(), key=lambda item: item[1]))

print("Sorted dictionary by age:")
for name, age in sorted_ages.items():
    print(f"{name}: {age}")