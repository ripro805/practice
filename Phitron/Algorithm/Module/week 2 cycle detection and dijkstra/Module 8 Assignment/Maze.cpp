#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n,m;
bool isValid(int i,int j){
     return (i >= 0 && i < n && j >= 0 && j < m );
}
void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    
    while (!q.empty()) {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 4; i++) { 
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            
            if (isValid(ci, cj) && !vis[ci][cj]&& (grid[ci][cj] == '.' || grid[ci][cj] == 'R' || grid[ci][cj] == 'D')) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {par_i, par_j};

                if (grid[ci][cj] == 'D')
                    return;
            }
        }
    }
}
int main() {
    cin >> n >> m;

    int si, sj, di, dj;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'R') {
                si = i, sj = j;
            }
            if (grid[i][j] == 'D') {
                di = i, dj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    
    bfs(si, sj);
     if (!vis[di][dj]) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j];
            }
            cout << endl;
        }
        return 0;
    }
    int x = di, y = dj;
    while (grid[x][y] != 'R') {
        pair<int, int> par = parent[x][y];
        x = par.first;
        y = par.second;

        if (grid[x][y] != 'R' && grid[x][y] != 'D') {
            grid[x][y] = 'X';
        }
    }
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}