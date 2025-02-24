#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
char grid[1005][1005];
bool vis[1005][1005];
int n, m;
int cnt;
vector<pair<int, int>> mv = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int i,int j){
    if(i<0 ||i>=n||j<0 ||j>=m) return false;
    else return true;
}
void dfs(int si, int sj)
{
   // cout << si << " " << sj << nl;
    
    vis[si][sj] = true;
     cnt++;
    for (int i = 0; i < 4; i++)
    {   
       
        int ci, cj;
        ci = si + mv[i].first;
        cj = sj + mv[i].second;
        if(isValid(ci,cj)&&!vis[ci][cj] && grid[ci][cj] == '.') 
          dfs(ci,cj);
    }
}
int32_t main()
{
    faster;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    int min_area=INT_MAX;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(grid[i][j]=='.'&& !vis[i][j]){
                cnt=0;
                dfs(i,j);
                min_area=min(min_area,cnt);
                flag=true;
            }
        }
    }
    if(flag) cout<<min_area<<endl;
    else cout<<"-1"<<endl;

    return 0;
}