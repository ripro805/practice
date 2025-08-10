#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n;
    cin>>n;
    vector<ll>ans;
    ll maxBit=__lg(n);
    for(int k=0;k<=maxBit;k++){
        if((n>>k)&1){
            ll val=(n-(1LL<<k));
            if(val>0) ans.push_back(val);
        }
    }
    reverse(ans.begin(),ans.end());
    ans.push_back(n);
    cout<<ans.size()<<nl;
    for(auto &x:ans){
        cout<<x<<" ";
    }
    cout<<nl;

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