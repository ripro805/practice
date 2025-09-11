#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    ll low = 1, high = m;
    while (low < high) {
        ll mid = (low + high) / 2;
        if (n * (mid * (m / (mid + 1)) + m % (mid + 1)) >= k) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    cout << low << nline;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) solve();

    return 0;
}
