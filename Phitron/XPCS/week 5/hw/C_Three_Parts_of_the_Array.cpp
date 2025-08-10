#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(auto &x:a) cin>>x;
    ll l=0,r=0,ans=0,lft=0,rht=0;
    while(l+r<n){
        lft+=a[l];
        l++;
        while(l+r<n&& rht<lft){
            rht+=a[n-1-r];
            r++;
        }
        if(lft==rht)ans=max(ans,lft);
    }
    cout<<ans<<nl;
}
int32_t main()
{
    faster;
    // int t;
    // cin >> t;
    // while(t--)
        solve();
    return 0;
}