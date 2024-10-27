def count_key_value_pairs(d):
    count = 0
    for key, value in d.items():
        count += 1  # Counting the key-value pair at the current level
        if isinstance(value, dict):  # If the value is a dictionary, recurse
            count += count_key_value_pairs(value)
    return count


nested_dict = {
    "student1": {
        "name": "Alice",
        "age": 20,
        "address": {
            "street": "123 Apple St",
            "city": "Wonderland",
            "zip": "12345"
        }
    },
    "student2": {
        "name": "Bob",
        "age": 22,
        "address": {
            "street": "456 Banana Blvd",
            "city": "Fruitville",
            "zip": "67890"
        }
    }
}

total_pairs = count_key_value_pairs(nested_dict)
print(f"Total number of key-value pairs: {total_pairs}")