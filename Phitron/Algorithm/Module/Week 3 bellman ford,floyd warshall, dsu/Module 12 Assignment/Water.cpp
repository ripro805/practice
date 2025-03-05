#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int n;
    cin >> n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    ll l,r,mx=0;
    for(ll i=0;i<n;i++){
        if(a[i]>=mx){
            mx=a[i];
            r=i;
        }
    }
    a[r]=-49,mx=0;
    for(ll i=0;i<n;i++){
        if(a[i]>=mx){
            mx=a[i];
             l=i;
        }
    }
    cout<<min(l,r)<<' '<<max(l,r)<<endl;
    }
    return 0;
}