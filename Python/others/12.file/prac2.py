#changing a word
file_path = "D:\\Apps & Software & Others\\Practice\\Python\\others\\12.file\\prac2.txt"

# Write to the file
with open(file_path, "w+") as f:
    f.write("hi jan! i love u a lot.\n i miss u a lot")
    f.seek(0)  # Reset the file cursor to the beginning of the file

    # Read from the file
    data = f.read()
    new_data = data.replace("a lot", "soo much")
    f.seek(0)  # Reset the file cursor to the beginning of the file
    
    # Write the modified data back to the file
    f.write(new_data)

# Read the modified content
with open(file_path, "r") as f:
    print(f.read())
