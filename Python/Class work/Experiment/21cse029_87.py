
students = {
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


student_id = input("Enter the student ID to search for (e.g., 'student1'): ")
if student_id in students:
        student_info = students[student_id]
        name = student_info.get("name", "N/A")
        age = student_info.get("age", "N/A")
        address = student_info.get("address", {})
        street = address.get("street", "N/A")
        city = address.get("city", "N/A")
        zip_code = address.get("zip", "N/A")

        print(f"Name: {name}")
        print(f"Age: {age}")
        print(f"Address: {street}, {city}, {zip_code}")
else:
        print(f"Student ID {student_id} not found.")

