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
    char prev='1';
    vector<ll>v;
    for(char c:s){
        if(c=='1') v.push_back(1);
        if(c=='0'&& prev=='1') v.push_back(0);
        prev=c;
    }
    ll ones=0,zeros=0;
for(int i=0;i<v.size();i++){
    if(v[i]==1)ones++;
    else zeros++;
}
if(ones>zeros) cout<<"YES"<<nl;
else cout<<"NO"<<nl;
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