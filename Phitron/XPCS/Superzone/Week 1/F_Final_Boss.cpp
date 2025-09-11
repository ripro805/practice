#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve() {
    ll k, n;
    cin >> k >> n;
    vector<ll> a(n), c(n);
    for (ll &x : a) cin >> x;
    for (ll &x : c) cin >> x;

    ll l = 1, r = 1e12, ans = r;
    while (l <= r) {
        ll mid = (l + r) / 2;
        ll sm = 0;
        for (ll i = 0; i < n; i++) {
            ll tot = (mid - 1) / c[i] + 1;
            sm += tot * a[i];
            if (sm >= k) break;
        }
        if (sm >= k) {
            ans = min(ans, mid);
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    faster;
    ll tt;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
