#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int l=0,r=0;
    ll ans=0;
    while(l<n&&r<m){
       int curr=a[l],cnt1=0,cnt2=0;
       while(l<n && a[l]==curr) l++,cnt1++;
       while(r<m && curr>b[r])r++;
       while(r<m && b[r]==curr)r++,cnt2++;
       ans+=(1LL*cnt1*cnt2);
    }
    cout<<ans<<nl;

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