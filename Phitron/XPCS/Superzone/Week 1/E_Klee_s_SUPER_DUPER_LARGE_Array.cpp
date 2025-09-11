#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll inf = 1e18;

ll sum(ll l, ll r, ll k) {
    return (r * (r + 1)) / 2 - (l * (l - 1)) / 2 + (r - l + 1) * k;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    ll start = 0, end = n - 1;
    ll ans = inf;

    while (start <= end) {
        ll mid = (start + end) / 2;
        ll x = sum(0, mid, k);
        ll y = sum(mid + 1, n - 1, k);

        if (x == y) {
            cout << 0 << nl;
            return;
        }

        if (x <= y) {
            start = mid + 1;
            ans = min(ans, abs(x - y));
        } else {
            end = mid - 1;
            ans = min(ans, abs(x - y));
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
