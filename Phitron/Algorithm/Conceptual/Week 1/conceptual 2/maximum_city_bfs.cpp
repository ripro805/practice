#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
char graph[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> mv = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int n, m;
int cnt;
bool is_valid(int i, int j)
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
            if (is_valid(ci, cj) && !vis[ci][cj] && graph[ci][cj]=='.')
            {
                 
                 vis[ci][cj]=true;
                 cnt++;
                q.push({ci,cj});
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
            cin >> graph[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int max_city = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (graph[i][j] == '.')
            {
                if (!vis[i][j])
                {
                    cnt=1;//reseting
                    bfs(i,j);
                 max_city=max(max_city,cnt);
                    
                    

                }
            }
        }
    }
    
    cout<<max_city<<nl;
    
    return 0;
}