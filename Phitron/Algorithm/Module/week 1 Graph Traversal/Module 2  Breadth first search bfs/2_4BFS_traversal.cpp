#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
vector<int>adj_list[10005];
bool vis[10005];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;

    while(!q.empty()){
        //ber kre ana
        int par=q.front();
        q.pop();
        //oi node niye kaaj
        cout<<par<<" ";
        //children push
        for (auto child : adj_list[par]){
            if(vis[child]==false){
                q.push(child);
                vis[child]=true;
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
    bfs(0);
   
    return 0;
}