def check_elmnt(x, a):
    if x in a:
        return "Found"
    else:
        return "Not Found"


set = {1, 2, 3, 4, 5}
element_to_check = int(input("Enter Element : "))

result = check_elmnt(element_to_check, set)

print(result)
