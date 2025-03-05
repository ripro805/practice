#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

ll dist[101][101];

int main() {
    faster;
    ll n, e;
    cin >> n >> e;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) dist[i][j] = 0; 
            else dist[i][j] = 1e17;    
        }
    }

    while (e--) {
       ll a, b, c;
        cin >> a >> b >> c;
        dist[a][b] = min(dist[a][b], c); 
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (dist[i][k]+dist[k][j]<dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j]; 
                }
            }
        }
    }

    int q;
    cin >> q;

    while (q--) {
        int src, dest;
        cin >> src >> dest;

        if (dist[src][dest] == 1e17) {
            cout << -1 << nl; 
        } else {
            cout << dist[src][dest] << nl; 
        }
    }

    return 0;
}