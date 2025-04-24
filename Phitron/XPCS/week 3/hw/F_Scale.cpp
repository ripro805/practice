#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n,k;
    cin>>n>>k;
    string s,ans;
    vector<string>v;
    for(int i=0;i<n;i++){
        cin>>s;
        if(i%k==0){
            for(int j=0;j<s.size();j++){
                if(j%k==0)ans.push_back(s[j]);
            }
            v.push_back(ans);
            ans.clear();

        }
    }
    for(auto it : v){
        cout<<it<<nl;
    }
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solve(i);
    return 0;
}