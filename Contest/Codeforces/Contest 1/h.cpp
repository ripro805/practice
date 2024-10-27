#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    // Calculate the product
    long long product = n * k * a;

    // Check for data type based on the value range
    if (product <= 2147483647LL && product >= -2147483648LL) {
        cout << "int" << endl;
    } 
    else if (product <= LLONG_MAX && product >= LLONG_MIN) {
        cout << "long long" << endl;
    } 
    else {
        cout << "double" << endl;
    }

    return 0;
}
