#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nl "\n"

void solve() {
    ll x;
    cin >> x;
    
    for (ll y = x - 1; y >= 1; --y) {
        ll z = x ^ y; // x XOR y
        if (z < x && x + y > z && x + z > y && y + z > x) {
            cout << y << nl;
            return;
        }
    }
    cout << -1 << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}