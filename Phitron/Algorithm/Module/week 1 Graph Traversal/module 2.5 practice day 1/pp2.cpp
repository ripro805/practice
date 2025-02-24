#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
vector<int>adj_list[10005];
bool vis[10005];
int level[1005];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;

    while(!q.empty()){
        
        int par=q.front();
        q.pop();
        
        for (auto child : adj_list[par]){
            if(vis[child]==false){
                q.push(child);
                vis[child]=true;
                level[child]=level[par]+1;
            }
        }
    }
}
int32_t main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
       int a,b;
       cin>>a>>b;
       adj_list[a].push_back(b);
       adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis)); 
    memset(level,-1,sizeof(level)); 
   int l;
   cin>>l;
   bfs(0);
   vector<int>res;
   for(int i=0;i<n;i++){
    if(level[i]==l){
        res.push_back(i);
    }
   }
   sort(res.begin(),res.end(),greater<int>());
   for(auto node : res){
    cout<<node<<" ";
   }
   cout<<nl;
    return 0;
}