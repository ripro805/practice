#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int par[100005];  
int group_size[100005]; 

int find(int node) {
    if (par[node] == -1) return node;
    int leader = find(par[node]);
    par[node] = leader;  
    return leader;
}

void dsu_union(int node1, int node2) {
    int led1 = find(node1);
    int led2 = find(node2);

    if (led1 != led2) {
        if (group_size[led1] >= group_size[led2]) {
            par[led2] = led1;
            group_size[led1] += group_size[led2];
        } else {
            par[led1] = led2;
            group_size[led2] += group_size[led1];
        }
    }
}

int main() {
    faster;
    
    int n, m;
    cin >> n >> m; 
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));
    
    int cycle_edges_count = 0;

    // Process each edge 
for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        
        if (find(u) == find(v)) {
            cycle_edges_count++;
        } else {
            dsu_union(u, v);
        }
    }

    cout << cycle_edges_count << nl;

    return 0;
}
