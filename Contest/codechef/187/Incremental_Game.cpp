#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll x,y,k;
    cin>>x>>y>>k;
    string wnr="Bob";
    ll fmv=1;
    while(fmv<=k){
        if(x>=fmv){
            ll X=x-fmv;
            if(!(X>fmv||y>fmv)){
                wnr="Alice";
                break;
            }
        }
        if(y>=fmv){
            ll Y=y-fmv;
            if(!(Y>fmv||x>fmv)){
                wnr="Alice";
                break;
            }
        }
        fmv++;
    }
    cout<<wnr<<nl;
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