#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    ll n;
    cin>>n;
    vector<ll>arr(n+5);
    vector<ll>pref(n+5);
    for(int i=1;i<=n;i++){
        cin>>arr[i];

        pref[i]=pref[i-1]+arr[i];
    }
    ll q;
    cin>>q;
    while(q--){
        ll s;
        cin>>s;
        ll indx=-1;
        for(int i=1;i<=n;i++){
            if(pref[i]>=s){
                indx=i;
                break;
            }
        }
        cout<<indx<<nl; 
    }
    return 0;
}