#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll k, n, m;
    cin >> k >> n >> m;
    vector<ll> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &y : b)
        cin >> y;
    vector<ll> res;
    ll l = 0, r = 0, ans = k;
    while (l < n || r < m)
    {
        bool flag = false;
        if (l < n && a[l] == 0)
        {
            res.push_back(0);
            k++;
            l++;
            flag = true;
        }
        else if (r < m && b[r] == 0)
        {
            res.push_back(0);
            k++;
            r++;
            flag = true;
        }
        else if (l < n && a[l] <= k)
        {
            res.push_back(a[l]);
            l++;
            flag = true;
        }
        else if (r < m && b[r] <= k)
        {
            res.push_back(b[r]);
            r++;
            flag = true;
        }
        if (!flag)
        {
            cout << -1 << nl;
            return;
        }
    }
    for (auto arr : res)
        cout << arr << " ";
    cout << nl;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}