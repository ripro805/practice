#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n,s;
    cin>>n>>s;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll l=0,r=0,sum=0,ans=0;
    while(r<n){
        sum+=arr[r];
        if(sum<=s){
            ans+=r-l+1;
        }
        else{
            while(sum>s){
            sum-=arr[l];
            l++;
           
        }
         ans+=r-l+1;
    }
        r++;
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