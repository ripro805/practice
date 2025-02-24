#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   int n,e;
   cin>>n>>e;
   vector<pair<int,int>>adj_list[n];
   while(e--){
     int a,b,c;
     cin>>a>>b>>c;
     adj_list[a].push_back({b,c});
     adj_list[b].push_back({a,c});
   }
   for(int i=0;i<n;i++){
    cout<<i<<"->";
    for(auto p : adj_list[i]){
        cout<<p.first<<" "<<p.second<<",";
        
    }
    cout<<nl;
   }
    return 0;
}