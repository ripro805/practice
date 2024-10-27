#include <iostream>
#include <cmath>  // For mathematical operations
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int d, x, y;
        cin >> d >> x >> y;  // Input for discount percentage, membership cost, and budget

        int min_session = -1;  // Initialize to -1, indicating impossible by default

        // Iterate over the number of sessions `n`
        for (int n = 0; n <= 100 / d; n++) {
            double discounted_price = x * (1 - n * d / 100.0);  // Calculate the discounted price after `n` sessions

            // Check if Chef can afford the membership with remaining coins
            if (discounted_price <= y - n) {
                min_session = n;  // Set the minimum sessions
                break;  // Break the loop, since we found the minimum
            }
        }

        // Output the minimum sessions or -1 if not possible
        cout << min_session << endl;
    }

    return 0;
}
