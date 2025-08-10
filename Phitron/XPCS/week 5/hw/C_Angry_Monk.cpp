#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(k+10);
    for(int i=1;i<=k;i++){
        cin>>arr[i];
    }
   sort(arr.begin()+1,arr.begin()+k+1);
   ll ans=0;
   for(int i=1;i<=k-1;i++){
        if(arr[i]>1) ans+=arr[i]-1+arr[i];
        else ans+=1;
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