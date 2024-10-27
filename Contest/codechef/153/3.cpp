#include <iostream>
#include <algorithm> // For max
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases
    while (T--) {
        int R, G, B;
        cin >> R >> G >> B;

        // Find the maximum of R, G, B
        int max_butterflies = max({R, G, B});
        int sum_others = R + G + B - max_butterflies;

        // Check if the largest is less than or equal to the sum of the other two plus 1
        if (max_butterflies <= sum_others + 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
