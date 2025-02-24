#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

vector<int> adj_list[1005]; 

int main() {
    faster;

    int n, e; 
    cin >> n >> e;

   while(e--) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); 
    }

    int q; 
    cin >> q;

    while (q--) {
        int no; 
        cin >> no;

        vector<int> res = adj_list[no];

        if (res.empty()) {
            cout << "-1" << endl;
        } else {
            sort(res.begin(), res.end(),greater<int>());

            for (int ans : res) {
                cout << ans << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
