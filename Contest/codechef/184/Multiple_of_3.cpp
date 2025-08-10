#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin>>n;
 
    if(n%3==0){
        cout<<n<<nl;
    }
    else if(n%3==1) cout<<n-1<<nl;
    else cout<<n+1<<nl;
    
}
int32_t main()
{
    faster;
    // int t;
    // cin >> t;
    // for(int i=1; i<=t; i++)
        solve();
    return 0;
}