
input_string = input("Enter a string to check for unique characters: ")


seen_characters = set()


all_unique = True


for char in input_string:
    if char in seen_characters:
        
        print(f"Duplicate character found: '{char}'")
        all_unique = False
        break
    
    seen_characters.add(char)


if all_unique:
    print("The string contains all unique characters.")
else:
    print("The string does not contain all unique characters.")
