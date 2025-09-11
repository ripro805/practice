#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());

    int distance_sum = 0, counter = 0;
    for (auto &dist : v) {
        distance_sum += (n - dist);
        if (distance_sum < n) counter++;
        else break;
    }
    cout << counter << nl;
}

int32_t main() {
    faster;
    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}
