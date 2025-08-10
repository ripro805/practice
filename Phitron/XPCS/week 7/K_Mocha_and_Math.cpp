#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
     ll n;
    cin>>n;
    ll arr[n];
    ll minn;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==0)
        minn=arr[0];
        else minn=minn&arr[i];
    }
    
    cout<<minn<<"\n";
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