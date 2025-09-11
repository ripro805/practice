#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int n, k;
vector<ll> stalls;

bool can_place(ll dist) {
    int cows = 1;
    ll last = stalls[0];
    for (int i = 1; i < n; i++) {
        if (stalls[i] - last >= dist) {
            cows++;
            last = stalls[i];
            if (cows >= k) return true;
        }
    }
    return false;
}
void solve()
{
      cin >> n >> k;
    stalls.resize(n);
    for (int i = 0; i < n; i++) cin >> stalls[i];

    ll lo = 0, hi = stalls.back() - stalls.front(), ans = 0;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (can_place(mid)) {
            ans = mid;
            lo = mid + 1;  // try bigger distance
        } else {
            hi = mid - 1;  // reduce distance
        }
    }
    cout << ans << "\n";
}
int32_t main()
{
    faster;
    // int tt;
    // cin >> tt;
    // while(tt--)
        solve();
    return 0;
}