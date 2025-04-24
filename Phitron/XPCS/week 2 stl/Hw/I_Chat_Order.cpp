#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    vector<string>vs;
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        vs.push_back(s);
    }
    reverse(vs.begin(),vs.end());
    map<string,bool>mp;
    for(auto i:vs){
        if(mp[i])continue;
        cout<<i<<endl;
        mp[i]=true;
    }

}
int32_t main()
{
    faster;
    int t=1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}