#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll ans=0;
    ans+=(v[0]-1);
    vector<ll>w(n);
    v[0]=w[0];
    ll two=2;
    for(int i=1;i<n;i++){
        if(v[i]<two){
            w[i]=v[i];
        }
        else{
            w[i]=two;
            two++;
        }
    }
    for(int i=0;i<n;i++){
        ans+=(v[i]-w[i]);
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