#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
vector<int>adj_list[101];
bool vis[101];
int node_to_src[101];
int node_to_des[101];
int level[101];
void bfs(int src,int chk)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
   if(chk==1)
    node_to_src[src]=0;
    else
    node_to_des[src]=0;

    while(!q.empty()){
        int par=q.front();
        q.pop();
        
        for (auto child : adj_list[par]){
            if(vis[child]==false){
                q.push(child);
                vis[child]=true;

                if(chk==1)
                node_to_src[child]=node_to_src[par]+1;
                else
                node_to_des[child]=node_to_des[par]+1;
            }
        }
    }
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
   for(int i=1;i<=t;i++){
    int n,e;
    cin>>n>>e;
    while(e--){
      int a,b;
      cin>>a>>b;
      adj_list[a].push_back(b);
      adj_list[b].push_back(a);
   }
   int si,di;
   cin>>si>>di;
   memset(vis,false,sizeof(vis));
   memset(node_to_src,-1,sizeof(node_to_src));
    bfs(si,1);


    memset(vis,false,sizeof(vis));
    memset(node_to_des,-1,sizeof(node_to_des));
     bfs(di,2);
       int ans=INT_MIN;
       for(int i=0;i<n;i++){
        int val=node_to_src[i]+node_to_des[i]; 
        ans=max(ans,val);
       }
       cout<<"Case "<<i<<": "<<ans<<nl;
       for(int i=0;i<n;i++){
        adj_list[i].clear();
       }
    
}
    return 0;
}