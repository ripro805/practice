#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void dfs(int u, int p, 
          const vector<vector<int>>& adj, 
          vector<int>& deg, 
          vector<int>& sz, 
          vector<int>& lvs_dwn, 
          vector<ll>& ops_dwn) {
    sz[u] = 1;
    lvs_dwn[u] = (deg[u] == 1 ? 1 : 0); 
    ops_dwn[u] = 0;

    for (int v : adj[u]) {
        if (v == p) continue;  
        dfs(v, u, adj, deg, sz, lvs_dwn, ops_dwn);
        sz[u] += sz[v];
        lvs_dwn[u] += lvs_dwn[v];
        if (sz[v] > 1) {
            ops_dwn[u] += lvs_dwn[v];
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    vector<int> dgre(n + 1, 0);

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        dgre[u]++;
        dgre[v]++;
    }

    bool is_star = false;
    for (int i = 1; i <= n; ++i) {
        if (dgre[i] == n - 1) {
            is_star = true;
            break;
        }
    }
    if (is_star) {
        cout << 0 << nl;
        return;
    }

    vector<int> sz(n + 1);
    vector<int> lvs_dwn(n + 1);
    vector<ll> ops_dwn(n + 1, 0);

  dfs(1, 0, adj, dgre, sz, lvs_dwn, ops_dwn);

    ll tot_lvs = lvs_dwn[1];
    ll mini_op = LLONG_MAX;

    for (int i = 1; i <= n; ++i) {
        ll curr_op = ops_dwn[i];
        if (i != 1 && n - sz[i] > 1) {
            curr_op += tot_lvs - lvs_dwn[i];
        }
        mini_op = min(mini_op, curr_op);
    }

    cout << mini_op << nl;
}

int32_t main()
{
    faster;
    int tt;
    cin >> tt;
    while(tt--)
        solve();
    return 0;
}