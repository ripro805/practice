#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n),h(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>h[i];
    ll mx=0,l=0,r=0,sum=0;
    while(r<n){
        if(r>0 && h[r-1]%h[r]!=0){
            l=r;
            sum=0;
        }
        sum+=a[r];
        while(sum>k){
            sum-=a[l];
            l++;
        }
        mx=max(mx,r-l+1);
        r++;
    }
    cout<<mx<<nl;
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