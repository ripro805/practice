#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int llint;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
vector<pair<llint, llint>> adj[100005];
llint dis[100005];
llint parent[100005];
void dijkstra(llint src)
{
    priority_queue<pair<llint, llint>, vector<pair<llint, llint>>, greater<pair<llint, llint>>> pq;
    pq.push({0, src});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<llint, llint> par = pq.top();
        pq.pop();
        llint par_node = par.second;
        llint par_dis = par.first;
        for (auto child : adj[par_node])
           {
            llint child_node = child.first;
            llint child_dis = child.second;
            llint total_dis=par_dis+child_dis;
            if(total_dis<dis[child_node]){
                dis[child_node]=total_dis;
                pq.push({dis[child_node],child_node});
                parent[child_node]=par_node;
           }
            }
    }
}
int32_t main()
{
    faster;
   llint n,e;
   cin>>n>>e;
   while(e--){
    llint a,b,c;
    cin>>a>>b>>c;
    adj[a].push_back({b,c});
    adj[b].push_back({a,c});

   }
   for(llint i=1;i<=n;i++){
    dis[i]=LLONG_MAX;
    parent[i]=-1;
   }
   dijkstra(1);
  if(dis[n]==LLONG_MAX){
    cout<<-1<<nl;
  }
  else{
    llint node=n;
    vector<llint>path;
    while(node!=-1){
        path.push_back(node);
        node=parent[node];
    }

    reverse(path.begin(),path.end());
    for(auto x: path){
        cout<<x<<" ";
    }
    cout<<nl;
  }
    return 0;
}