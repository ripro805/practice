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
    
   int no;
   cin>>no;
   bfs(no);
int cnt=0;
for(auto des: adj_list[no]){
    cnt++;
}
cout<<cnt<<nl;

//        or

// cout << adj_list[no].size() << "\n";

    return 0;
}