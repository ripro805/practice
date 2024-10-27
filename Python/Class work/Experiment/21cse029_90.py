
def sort_products_by_price(product_dict):
    sorted_products = dict(sorted(product_dict.items(), key=lambda item: item[1]['price']))
    return sorted_products


products = {
    "product1": {
        "name": "Laptop",
        "price": 1200,
        "quantity": 10
    },
    "product2": {
        "name": "Smartphone",
        "price": 800,
        "quantity": 15
    },
    "product3": {
        "name": "Tablet",
        "price": 400,
        "quantity": 20
    },
    "product4": {
        "name": "Headphones",
        "price": 150,
        "quantity": 50
    }
}

sorted_products = sort_products_by_price(products)


print("Products sorted by price in ascending order:")
for product_id, details in sorted_products.items():
    print(f"{product_id}: {details}")
