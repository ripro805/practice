#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<k;i++){
        if(s[i]=='W'){
            cnt++;
        }
    }
    int ans=cnt;
    for(int i=k;i<n;i++){
        if(s[i]=='W')cnt++;
        if(s[i-k]=='W')cnt--;
            

        ans=min(ans,cnt);
    }
    cout<<ans<<nl;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}