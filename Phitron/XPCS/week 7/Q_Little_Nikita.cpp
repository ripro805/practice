#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n,m;
    cin>>n>>m;
    if(n<m){
        cout<<"NO"<<nl;
    }
    else {
        if((n-m)%2==0){
            cout<<"YES"<<nl;            

        }
        else  cout<<"NO"<<nl;
    }
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