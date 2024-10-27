item_quantities = {
    "Apples": 10,
    "Bananas": 15,
    "Oranges": 7,
    "Grapes": 20
}
print("Current dictionary:")
for item, quantity in item_quantities.items():
    print(f"{item}: {quantity}")

item_to_remove = input("Enter the name of the item to remove: ")

if item_to_remove in item_quantities:
        del item_quantities[item_to_remove]
        print(f"Item '{item_to_remove}' removed.")
else:
        print(f"Item '{item_to_remove}' not found in the dictionary.")
        
print("Updated dictionary:")
for item, quantity in item_quantities.items():
    print(f"{item}: {quantity}")
