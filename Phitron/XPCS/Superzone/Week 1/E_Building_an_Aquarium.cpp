#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

bool check(ll h, vector<ll>& v, ll x) {
    ll total = 0;
    for (auto &val : v) {
        if (h >= val) total += h - val;
        if (total > x) return false;
    }
    return true;
}

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    ll lo = 1, hi = 2e9, ans = -1;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (check(mid, v, x)) {
            ans = max(ans, mid);
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << ans << nl;
}

int32_t main() {
    faster;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
