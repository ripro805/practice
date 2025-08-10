#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
const int  N=30;

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n;
    cin>>n;
    vector<ll>cnt(N);
   for(int i=1;i<=n;i++){
    ll x;cin>>x;
    cnt[__lg(x)]++;
   }
   ll ans=0;
   for(int i=0;i<N;i++){
    ans+=cnt[i]*(cnt[i]-1)/2;
   }
   cout<<ans<<nl;


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