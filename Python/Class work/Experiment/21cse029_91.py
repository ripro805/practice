def search_key_in_nested_dict(d, key):
    for k, v in d.items():
        if k == key:
            return v
        elif isinstance(v, dict):
            result = search_key_in_nested_dict(v, key)
            if result is not None:
                return result
    return None


employees = {
    "emp1": {
        "name": "Alice",
        "age": 30,
        "position": "Engineer",
        "salary": 70000
    },
    "emp2": {
        "name": "Bob",
        "age": 35,
        "position": "Manager",
        "salary": 85000
    },
    "emp3": {
        "name": "Charlie",
        "age": 28,
        "position": "Analyst",
        "salary": 60000
    }
}


key_to_search = input("Enter the key to search for: ")


value = search_key_in_nested_dict(employees, key_to_search)


if value is not None:
    print(f"Value for '{key_to_search}': {value}")
else:
    print("Key Not Found")
