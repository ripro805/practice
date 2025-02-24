#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
char grid[20][20];
bool vis[20][20];
vector<pair<int,int>>mv={{0,-1},{0,1},{1,0},{-1,0}};
int m,n;
int cnt;
bool isVlaid(int i,int j){
    if(i<0||i>=n||j<0||j>=m) return false;
    return true;
}
void dfs(int si,int sj)
{
    vis[si][sj]=true;
    cnt++;
    for(int i=0;i<4;i++){
        int ci=si+mv[i].first;
        int cj=sj+mv[i].second;
        if(isVlaid(ci,cj)&& !vis[ci][cj]&& grid[ci][cj]=='.')
         dfs(ci,cj);
    }
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
   for(int i=1;i<=t;i++){
        cin>>m>>n;
        int si,sj;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
                if(grid[i][j]=='@'){
                    si=i;
                    sj=j;
                }
            }
        }
        memset(vis,false,sizeof(vis));
        cnt=0;
        dfs(si,sj);
        cout<<"Case "<<i<<": "<<cnt<<nl;
    }
    return 0;
}