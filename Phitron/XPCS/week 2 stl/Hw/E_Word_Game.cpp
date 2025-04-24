#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n,N=3;
    cin>>n;
    map<string,vector<int>>mp;
    for(int i=0;i<N;i++){
        for(int j=0;j<n;j++){
            string s;
            cin>>s;

            mp[s].push_back(i);
        }
    }
   vector<int>ans(N+1);
    for(auto [x,y]:mp){
        vector<int>v=y;
        if(v.size()==1)
         ans[v[0]]+=3;

         if(v.size()==2)
         {
            ans[v[0]]++;
            ans[v[1]]++;
         }

    }
    for(int i=0;i<N;i++){
        cout<<ans[i]<<" ";

    }
    cout<<nl;
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