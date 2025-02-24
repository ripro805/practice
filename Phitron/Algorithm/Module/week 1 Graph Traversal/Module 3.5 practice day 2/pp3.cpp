#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
vector<int> adj_list[1005];
bool vis[1005];
int component_size = 0;

void dfs(int src) {
    vis[src] = true;
    component_size++;  // কম্পোনেন্টের সাইজ বাড়ানোর জন্য

    for (auto child : adj_list[src]) {
        if (!vis[child])
            dfs(child);
    }
}

int32_t main() {
    faster;
    
    int n, e;
    cin >> n >> e;
    
    while (e--) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    
    memset(vis, false, sizeof(vis));

    vector<int> components;

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            component_size = 0;  
            dfs(i);  
            components.push_back(component_size);  
        }
    }

    sort(components.begin(), components.end()); 

    for (int size : components) {
        cout << size << " ";
    }
    cout << nl;

    return 0;
}
