#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
ll GCD(ll a, ll b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;

    if (x > y)
        swap(x, y);

    ll gcd = GCD(x, y);

    if (k == 1)
        cout << gcd + x << nl;

    else
        cout << (gcd << 1) << nl;
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