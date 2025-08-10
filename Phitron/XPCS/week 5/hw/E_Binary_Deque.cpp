#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n,s;
    cin>>n>>s;
    vector<ll>a(n);
    ll tot=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        tot+=a[i];

    }
    if(tot<s){
        cout<<-1<<nl;
        return;
    }
    if(tot==s){
        cout<<0<<nl;
        return;
    }
    ll l=0,r=0,sum=0,mx=0;
    while(r<n){
        sum+=a[r];
        while(sum>s){
            sum-=a[l];
            l++;
        }
        if(sum==s){
            mx=max(mx,r-l+1);
        }
        r++;
    }
    cout<<n-mx<<nl;
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