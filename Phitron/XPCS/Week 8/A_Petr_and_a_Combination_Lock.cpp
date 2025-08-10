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
    for(auto &x: a) cin>>x;
    bool ok=false;
  
    for(int mask=0;mask<(1<<n);mask++){
          ll sum=0;
        for(int k=0;k<n;k++){
            if((mask>>k)&1){
                sum+=a[k];
            }
            else{
                sum-=a[k];
            }
        }
        if(sum%360==0){
            ok=true;
            break;
        }
    }
    if(ok) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
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