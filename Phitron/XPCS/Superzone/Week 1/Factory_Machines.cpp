#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int n;
ll t;
vector<ll> k;

bool canProduce(ll time) {
    ll total = 0;
    for (int i = 0; i < n; i++) {
        total += time / k[i];
        if (total >= t) return true;
    }
    return total >= t;
}

void solve()
{
    cin >> n >> t;
    k.resize(n);
    for (int i = 0; i < n; i++) cin >> k[i];

    ll lft = 1, rgt = 1e18;
    ll ans = rgt;

    while (lft <= rgt) {
        ll mid = lft + (rgt - lft) / 2;
        if (canProduce(mid)) {
            ans = mid;
            rgt = mid - 1;
        } else {
            lft = mid + 1;
        }
    }

    cout << ans << nl;
}

int32_t main()
{
    faster;
    int tt = 1;
    while(tt--)
        solve();
    return 0;
}
