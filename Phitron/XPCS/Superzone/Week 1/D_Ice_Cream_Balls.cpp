#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {
    ll n;
    cin >> n;

    ll start = 2, end = 1e10, mid;
    mid = (start + end) / 2;
    ll ans = end;

    while (start <= end) {
        ll cur = (mid * (mid - 1)) / 2;
        if (cur >= n) {
            if (ans > mid) ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }

    ll now = (ans * (ans - 1)) / 2;
    if (now == n) {
        cout << ans << nl;
    } else {
        ans -= 1;
        now = (ans * (ans - 1)) / 2;
        ll val = ans + (n - now);
        cout << val << nl;
    }
}

int32_t main() {
    faster;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
