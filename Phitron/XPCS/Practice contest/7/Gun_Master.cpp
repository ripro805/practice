#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n,d;
    cin>>n>>d;
    vector<ll>a(n);
    for(auto &x:a) cin>>x;
    ll i=0,flag=1,cnt=0;
    while(i<n){
        if(a[i]<=d && flag==0){
            cnt++;
            flag=1;
        }
        else if(a[i]>d && flag==1){
            cnt++;
            flag=0;
        }
        i++;
    }
    cout<<cnt<<nl;
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