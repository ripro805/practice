#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define nl "\n"

void solve() {
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;

    int s0 = count(s.begin(), s.end(), '0');
    int t0 = count(t.begin(), t.end(), '0');
    int s1 = n - s0;
    int t1 = n - t0;

    if (s0 != t0 || s1 != t1) {
        cout << "NO" << nl;
        return;
    }

    int mismatch = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) mismatch++;
    }

    int min_ops = mismatch / 2;

    if (k == min_ops) {
        cout << "YES" << nl;
    } 
    else if (k > min_ops) {
        if (s0 == 1 && s1 == 1) {
            if (s != t) {
                if (k % 2 == 0) cout << "NO" << nl;
                else cout << "YES" << nl;
            } else {
                if (k % 2 != 0) cout << "NO" << nl;
                else cout << "YES" << nl;
            }
        } else {
            cout << "YES" << nl;
        }
    } 
    else {
        cout << "NO" << nl;
    }
}

int32_t main() {
    faster;
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
