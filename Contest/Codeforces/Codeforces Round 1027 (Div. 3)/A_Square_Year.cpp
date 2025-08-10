#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

bool isPerfectSquare(int y, int &a, int &b) {
    int sm = 0;
    while (sm <= 99) {
        if (sm * sm == y) {
            int i = 0;
            while (i <= sm) {
                a = i;
                b = sm - i;
                return true;
            }
        }
        sm++;
    }
    return false;
}

void solve() {
    string s;
    cin >> s;
    int y = stoi(s);

    int a = -1, b = -1;
    if (isPerfectSquare(y, a, b)) {
        cout << a << " " << b << nl;
    } else {
        cout << -1 << nl;
    }
}

int32_t main() {
    faster;
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
