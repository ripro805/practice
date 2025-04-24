#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr(n+1),cnt(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    set<int>s;
    for(int i=n;i>=1;i--){
        s.insert(arr[i]);
        cnt[i]=s.size();
    }
    for(int i=1;i<=m;i++) { 
    int pos;
    cin>>pos;
    cout<<cnt[pos]<<nl;
}
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