#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
      ll n, k,sum=0;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum<n) cout<<"NO"<<nl;
    else if(sum%n!=0&& k==0)cout<<"NO"<<nl;
     else cout<<"YES"<<nl;
   
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