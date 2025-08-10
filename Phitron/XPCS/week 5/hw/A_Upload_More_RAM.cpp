#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n<<nl;
        return;
    }
    if(n==1){
        cout<<1<<nl;
        return;
    }
    cout<<n*k-k+1<<nl;
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