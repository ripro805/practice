#include <iostream>
using namespace std;

class shop {
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void displayprice(void);
    void setprice(void);
};

void shop::setprice(void) {
    cout << "Enter the item id " << counter + 1 << ": " << endl;
    cin >> itemid[counter];
    cout << "Enter the price: " << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::displayprice(void) {
    for (int i = 0; i < counter; i++) {
        cout << "The price of item id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main() {
    shop dokaan;
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    dokaan.initcounter(); // Initialize counter outside the loop
    for (int i = 0; i < n; i++) {
        dokaan.setprice();
    }
    
    dokaan.displayprice();

    return 0;
}
