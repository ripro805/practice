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
    for(auto &x : arr) cin>>x;
    reverse(arr.begin(),arr.end());
    while(!arr.empty() && arr.back()==0) arr.pop_back();
    if(arr.empty()){
        cout<<0<<nl;
        return;
    }
    ll ans=0;
    reverse(arr.begin(),arr.end());
    ll i=0;
    while(i<arr.size()-1){
        if(arr[i]==0) ans++;
        else ans+=arr[i];
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