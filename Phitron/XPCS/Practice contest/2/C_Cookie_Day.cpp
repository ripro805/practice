#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
   ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
   for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=-1;
    for(int i=0;i<n;i++){
        if(v[i]>=k){
            ll rem=v[i]%k;
            if(ans==-1||rem<ans){
                ans=rem;
            }
        }
    }
    cout<<ans<<nl;
    
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}