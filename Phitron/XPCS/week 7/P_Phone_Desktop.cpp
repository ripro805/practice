#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll x, y;
    cin >> y >> x;

    int ans = x / 2;

    x = max(0ll, x - 2 * ans);
    y = max(0ll, y - 7 * ans);

    if (x)
    {
        x = 0;
        y = max(0ll, y - 11);
        ans++;
    }

    ans += (y + 14) / 15;

    cout << ans << '\n';
}

int32_t main()
{
    faster;
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}