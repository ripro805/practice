#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
     ll x,y,k;
       cin>>x>>y>>k;
        ll max1=max(x,y),min1=min(x,y);
        ll ok1=2*(min1/k);
        ll mn=(min1/k);
       mn=mn*k;
        ll ex=(max1-mn+k-1)/k;
        ll ans=ex*2+ok1;
       if(x>y)
       {
           ans--;
       }
       if(x>y && ex==1 && mn!=y)
       {
           ans++;
       }
       cout<<ans<<endl;
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