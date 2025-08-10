#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(auto &x:arr) cin>>x;
    ll prefMax=-1;
    ll prefSum=0;
    ll ans=0;
    ll i=0;
    while(i<n){
        prefMax=max(prefMax,arr[i]);
        prefSum+=arr[i];
        if(prefSum-prefMax==prefMax) ans++;
        i++;
       
    }
     cout<<ans<<nl;
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