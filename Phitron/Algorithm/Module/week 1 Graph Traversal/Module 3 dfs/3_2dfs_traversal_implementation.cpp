#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
vector<int>adj_list[1005];
bool vis[1005];
void dfs(int src){
    cout<<src<<" ";
    vis[src]=true;
    for(int child: adj_list[src]){
        if(!vis[child]) dfs(child);
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
    dfs(0);
    return 0;
}