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
    multiset<ll>ml;
    while(r<n){
        ml.insert(arr[r]);
        ll mx=*ml.rbegin(),mn=*ml.begin();
        if(mx-mn<=s){
            ans+=r-l+1;
        }
        else{
            while(l<=r){
            ll mx=*ml.rbegin(),mn=*ml.begin();
            if(mx-mn<=s){
            break;
            }
            ml.erase(ml.find(arr[l]));

            l++;
           
        }

        ll mx=*ml.rbegin(),mn=*ml.begin();
        if(mx-mn<=s){
            ans+=r-l+1;
        }
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