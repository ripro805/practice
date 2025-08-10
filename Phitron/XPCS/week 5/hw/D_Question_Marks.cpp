#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll freq[4]={0};
    for(auto ch:s){
        if(ch!='?')freq[ch-'A']++;
        
    }
    ll ans=0;
    for(int i=0;i<4;i++){
        ans+=min(n,freq[i]);
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