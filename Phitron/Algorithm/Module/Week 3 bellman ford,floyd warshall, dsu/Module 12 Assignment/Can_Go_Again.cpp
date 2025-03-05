#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

class Edge {
   public:
   int a, b, c;
   Edge(int a, int b, int c) {
       this->a = a;
       this->b = b;
       this->c = c;
   }
};

ll dis[1005]; 
vector<Edge> ed_list;
int n, e;
bool cycle = false;

void bellman_ford(int src) {
    for(int i = 1; i <= n; i++) {
        dis[i] = 1e17;
    }
    dis[src] = 0;

    for(int i = 0; i < n; i++) {
        bool updated = false;
        for(auto ed : ed_list) {
            int a = ed.a, b = ed.b, c = ed.c;
            if(dis[a] != 1e17 && dis[a] + c < dis[b]) {
                if(i==n-1)cycle=true;
                dis[b] = dis[a] + c;
                updated = true;
            }
        }
        if (!updated) break;  
    }
}

int main() {
    faster;

    cin >> n >> e;

    // Reading edges
    while(e--) {
        int a, b, c;
        cin >> a >> b >> c;
        ed_list.push_back(Edge(a, b, c));
    }

    int src;
    cin >> src;

    bellman_ford(src);

    if (cycle) {
        cout << "Negative Cycle Detected" << nl;
        return 0; 
    }

    int q;
    cin >> q;

    while(q--) {
        int dest;
        cin >> dest;

        if(dis[dest] == 1e17) {
            cout << "Not Possible" << nl;
        } else {
            cout << dis[dest] << nl;
        }  }

    return 0;
}