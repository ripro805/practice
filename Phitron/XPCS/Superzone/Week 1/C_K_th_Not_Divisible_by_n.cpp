#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll fullBlocks = (k - 1) / (n - 1);
    ll ans = fullBlocks * n + (k - fullBlocks * (n - 1));
    cout << ans << nl;
}

int32_t main()
{
    faster;
    int tt;
    cin >> tt;
    while(tt--)
        solve();
    return 0;
}
