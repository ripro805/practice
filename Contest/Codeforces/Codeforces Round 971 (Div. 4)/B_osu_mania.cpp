#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin>>n;
    vector<ll>ans;
   
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
         ll pos=0;
        for(auto c:s){
            pos++;
            if(c=='#')
            {
                ans.push_back(pos);
                break;
            }
        }
        
        
    }
    reverse(ans.begin(),ans.end());
    for(auto val: ans)cout<<val<<" ";
    cout<<nl;
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