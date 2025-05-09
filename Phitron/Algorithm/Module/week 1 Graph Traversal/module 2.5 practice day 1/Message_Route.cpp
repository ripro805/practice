#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
const int MAXN = 1e5 + 5;
vector<int> adj_list[MAXN];
bool vis[MAXN];
int parent[MAXN];
int level[MAXN];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    parent[src] = -1;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (auto child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;

                parent[child] = par;
            }
        }
    }
}
int32_t main()
{
    faster;
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));

    memset(parent, -1, sizeof(parent));
    int src = 1, des = n;

    bfs(src);

    if (!vis[des])
    {
        cout << "IMPOSSIBLE" << nl;
        return 0;
    }
    vector<int> res;
    int node = des;
    while (node != -1)
    {
        res.push_back(node);
        node = parent[node];
    }

    reverse(res.begin(), res.end());

    cout << res.size() << nl;
    for (auto x : res)
    {
        cout << x << " ";
    }
    return 0;
}