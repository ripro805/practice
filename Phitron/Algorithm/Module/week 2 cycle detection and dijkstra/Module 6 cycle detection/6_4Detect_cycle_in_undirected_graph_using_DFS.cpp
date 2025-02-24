 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
vector<int>adj_list[1005];
bool vis[1005];
int parent[1005];
bool cycle;
void dfs(int src){
    vis[src]=true;
    for(auto child: adj_list[src]){
        if(vis[child]&& parent[src]!=child) cycle=true;
        if(!vis[child]) {
             parent[child]=src;
            dfs(child);
           
        }
    }

}
int32_t main()
{
    faster;
   int n,e;
   cin>>n>>e;
   while(e--){
    int a,b;
    cin>>a>>b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
   }
   memset(vis,false,sizeof(vis));
   memset(parent,-1,sizeof(parent));
   cycle=false;
   for(int i=0;i<n;i++){
     if(!vis[i]) dfs(i);
   }
   if(cycle) cout<<"YES"<<nl;
   else cout<<"NO"<<nl;
    return 0;
}