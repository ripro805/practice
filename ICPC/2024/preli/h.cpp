#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MOD = 1e9 + 7;

// Function to compute (base^exp) % mod using binary exponentiation
long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        // Total cells in the grid
        long long total_cells = n * m;

        // Calculate number of ways to color the grid
        if (k == 1) {
            // If there is only one color, we can only color the grid if n * m is 1
            cout << (total_cells == 1 ? 1 : 0) << endl;
        } else {
            // Using the formula: k * (k - 1)^(total_cells - 1)
            long long ways = k * mod_exp(k - 1, total_cells - 1, MOD) % MOD;
            cout << ways << endl;
        }
    }
    return 0;
}