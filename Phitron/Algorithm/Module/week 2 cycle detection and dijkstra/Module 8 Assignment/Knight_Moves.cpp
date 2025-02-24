#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
vector<pair<int, int>> d = {{2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {2, 1}, {1, 2}, {-1, 2}};
int n, m;

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty()) {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 8; i++) {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj]) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cin >> n >> m;  
        int si, sj, di, dj;
        cin >> si >> sj; 
        cin >> di >> dj; 
        
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        
        bfs(si, sj);
        
        if (level[di][dj] == -1)
            cout << "-1" << endl;
        else
            cout << level[di][dj] << endl;
    }

    return 0;
}
