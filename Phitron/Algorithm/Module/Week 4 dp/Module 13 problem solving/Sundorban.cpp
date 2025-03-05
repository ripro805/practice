#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
char grid[35][35];
bool vis[35][35];
int level[35][35];
int n;
vector<pair<int, int>> mv = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= n )
        return false;
    else
        return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});

    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;
   
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + mv[i].first;
            int cj = par_j + mv[i].second;
            if (isValid(ci, cj) && !vis[ci][cj]&& grid[ci][cj]!='T')
            {
                 q.push({ci,cj});
                 vis[ci][cj]=true;
                 level[ci][cj]=level[par_i][par_j]+1;
            }

        }
    }
}
int32_t main()
{
    faster;
    int si,sj,di,dj;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j]=='S'){
                si=i;
                sj=j;
            }
            if(grid[i][j]=='E'){
                di=i;
                dj=j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    
    bfs(si, sj);
    cout<<level[di][dj]<<nl;

    return 0;
}