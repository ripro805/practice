#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (int& x : a) cin >> x;

    int ans = 0;
    int l = 0;

    while (l < n) {
        if (a[l] > q) {
            l++;
            continue;
        }

        int r = l;
        while (r < n && a[r] <= q) {
            r++;
        }

        int len = r - l;
        if (len >= k) {
            int m = len - k + 1;
            ans += (m * (m + 1)) / 2;;
        }

        l = r;
    }

    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
