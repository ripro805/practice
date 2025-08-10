#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    ll n,c;
    cin>>n>>c;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]+=(i+1);
    }
    sort(v.begin(),v.end());
    ll ans=0;
    ll sum=0;
    for (int i=0;i<n;i++){
        if(sum+v[i]>c)break;
        sum+=v[i];
        ans++;
        
    }
    cout<<ans<<nl;

}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solve(i);
    return 0;
}