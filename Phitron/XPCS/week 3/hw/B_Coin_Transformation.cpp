#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
   ll n;
    cin>>n;
    ll cnt=1;
    while(n>3){
        n/=4;
        cnt*=2;
    }
    cout<<cnt<<nl;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}