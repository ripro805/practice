sample_dict = {
    "Alice": 25,
    "Bob": 22,
    "Charlie": 30,
    "Diana": 27
}
key_to_search = input("Enter the key to search for: ")

if key_to_search in sample_dict:
        print("Key Found")
else:
        print("Key Not Found")