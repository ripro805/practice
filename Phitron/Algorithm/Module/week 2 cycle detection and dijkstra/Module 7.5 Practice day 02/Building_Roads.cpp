#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
const int N=10e+5;
vector<int> adj[N];
bool vis[N];
vector<int> components;
void dfs(int src)
{
    vis[src] = true;
    for (auto child : adj[src])
    {
        if (!vis[child])
            dfs(child);
    }
}
int32_t main()
{
    faster;
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            components.push_back(i);
            dfs(i);
        }
    }
    int roads = components.size() - 1;
    cout << roads << nl;
    for (int i = 1; i < components.size(); i++)
    {
        cout << components[i-1] << " " << components[i] << nl;
    }
    return 0;
}