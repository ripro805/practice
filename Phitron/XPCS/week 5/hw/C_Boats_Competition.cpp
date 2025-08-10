#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
     ll n,ans=0;
    cin >> n;
    vector<int> w(n);
    for (int &x : w) cin >> x;
    sort(w.begin(),w.end());
    ll sum=1;
    while(sum<=100){
        ll cnt=0;
        ll l=0,r=n-1;
        while(l<r){
            if(w[l]+w[r]>sum)r--;
            else if(w[l]+w[r]<sum)l++;
            else{
                cnt++;
                l++;
                r--;
            }
        }
        ans=max(ans,cnt);
        sum++;
    }
    cout<<ans<<nl;
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