#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<n;i++){
        string name,ip;
        cin>>name>>ip;
        mp[ip]=name;
    }
    
    for(int i=0;i<m;i++){
        string q_name,q_ip;
        cin>>q_name>>q_ip;
        q_ip.pop_back();
        cout<<q_name<<" "<<q_ip<<"; #"<<mp[q_ip]<<nl;
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