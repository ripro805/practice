#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(a*c,b*d)<<nl;
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