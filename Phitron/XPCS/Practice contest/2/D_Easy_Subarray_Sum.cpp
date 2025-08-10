#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l = -1, r = n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0){
             if (l == -1)
                 l = i;
            r = i;
        }
            
       
    }
    if (l != -1)
       for (int i = l; i <= r; i++)
        {
            if (v[i] < 0)
                ans++;
        }
        cout << ans << nl;
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