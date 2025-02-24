#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
 vector<pair<int,int>>adj_list[1005];
 int dis [1005];
 void dijkstra(int src){
      queue<pair<int,int>>q;
      dis[src]=0;
       q.push({src,0 });
       while(!q.empty()){
        pair<int,int>par=q.front();
        q.pop();
        int par_node=par.first;
        int par_dis=par.second;

        for(auto child : adj_list[par_node]){
            int child_node=child.first;
            int child_dis=child.second;

            int path_relax=par_dis+child_dis;
            if(path_relax<dis[child_node]){
                dis[child_node]=path_relax;
                q.push({child_node,dis[child_node]});
            }
        }
       }
 }
int32_t main()
{
    faster;
   int n,e;
   cin>>n>>e;
  
   while(e--){
     int a,b,c;
     cin>>a>>b>>c;
     adj_list[a].push_back({b,c});
     adj_list[b].push_back({a,c});
   }
   for(int i=0;i<n;i++){
     dis[i]=INT_MAX;
   }
   dijkstra(0);
    for(int i=0;i<n;i++){
     cout<<i<<"->"<<dis[i]<<nl;
   }
    return 0;
}