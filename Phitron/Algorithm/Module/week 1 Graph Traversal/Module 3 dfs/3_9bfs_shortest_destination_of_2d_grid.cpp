#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
int n, m;
vector<pair<int, int>> mv = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    else
        return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});

    vis[si][sj] = true;
    level[si][sj]=0;

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
            if (isValid(ci, cj) && !vis[ci][cj])
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

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
     memset(level, -1, sizeof(level));
    int si, sj,di,dj;
    cin >> si >> sj>>di>>dj;
    bfs(si, sj);
    cout<<level[di][dj]<<nl;

    return 0;
}