#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int arr;
        cin>>arr;
        mp[arr]++;    
    }
    int ans=0;
    for(auto [val,cnt]: mp){
        ans=max(cnt,ans);
    }
    cout<<ans<<nl;
}
int32_t main()
{
    faster;
    // int t;
    // cin >> t;
    // for(int i=1; i<=t; i++)
        solve();
    return 0;
}