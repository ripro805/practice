item_prices = {
    "Apple": 0.50,
    "Banana": 0.30,
    "Orange": 0.50,
    "Pear": 0.60
}
search_price = float(input("Enter the price to search for: "))
items = [item for item, price in item_prices.items() if price == search_price]
if items:
    print(f"Items with price {search_price}:")
    for item in items:
        print(item)
    if len(items) > 1:
        print(f"There are {len(items)} items with the price {search_price}.")
else:
    print(f"No items found with price {search_price}.")