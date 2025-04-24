#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

bool can_Reach(ll st, ll tar)
{
    if (st == tar)
        return true;
    if (st > tar)
        return false;

    ll l = can_Reach(st * 10, tar);
    ll r = can_Reach(st * 20, tar);
    return l || r;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if (can_Reach(1, n))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}