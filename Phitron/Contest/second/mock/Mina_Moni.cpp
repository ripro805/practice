#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
vector<ll> a;
ll n;
ll go(ll pos, ll st, ll st2, ll s1, ll s2)
{
    if (n % 2 != 0)
    {
        if (s1 > n / 2 + 1)
            return 1e18;
        if (s2 > n / 2 + 1)
            return 1e18;
    }
    else
    {
        if (s1 > n / 2 or s2 > n / 2)
            return 1e18;
    }
    if (pos == a.size())
        return abs(st - st2);
    ll mn = 1e18;
    ll ans1 = go(pos + 1, st, st2 + a[pos], s1, s2 + 1);
    ll ans2 = go(pos + 1, st + a[pos], st2, s1 + 1, s2);
    return min(ans1, ans2);
}

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        cout << go(0, 0, 0, 0, 0) << nl;
        a.clear();
    }
    return 0;
}