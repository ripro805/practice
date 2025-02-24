#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
char graph[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> mv = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int n, m;

bool is_valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    else
        return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + mv[i].first;
        int cj = sj + mv[i].second;
        if (is_valid(ci, cj) && !vis[ci][cj] && graph[ci][cj] != '#')
            dfs(ci, cj);
    }
}

int32_t main()
{
    faster;
    cin >> n >> m;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            if (graph[i][j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));

    dfs(si, sj);
    if (vis[di][dj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
