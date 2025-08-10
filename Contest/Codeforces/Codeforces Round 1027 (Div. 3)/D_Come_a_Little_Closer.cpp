#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl "\n"
#define faster ios_base::sync_with_stdio(false); cin.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> points(n);
    vector<int> xs(n), ys(n);

    for (int i = 0; i < n; ++i) {
        cin >> points[i].first >> points[i].second;
        xs[i] = points[i].first;
        ys[i] = points[i].second;
    }

    sort(xs.begin(), xs.end());
    sort(ys.begin(), ys.end());

    // original bounds
    int min_x = xs[0], max_x = xs.back();
    int min_y = ys[0], max_y = ys.back();
    int base_area = (max_x - min_x + 1) * (max_y - min_y + 1);
    int ans = base_area;

    // Count frequency of min/max to see if removing affects the boundary
    map<int, int> x_count, y_count;
    for (auto [x, y] : points) {
        x_count[x]++;
        y_count[y]++;
    }

    for (auto [x, y] : points) {
        int new_min_x = min_x, new_max_x = max_x;
        int new_min_y = min_y, new_max_y = max_y;

        if (x == min_x && x_count[x] == 1) new_min_x = xs[1];
        if (x == max_x && x_count[x] == 1) new_max_x = xs[n - 2];
        if (y == min_y && y_count[y] == 1) new_min_y = ys[1];
        if (y == max_y && y_count[y] == 1) new_max_y = ys[n - 2];

        int width = new_max_x - new_min_x + 1;
        int height = new_max_y - new_min_y + 1;
        int area = width * height;
        ans = min(ans, area);
    }

    cout << ans << nl;
}

int32_t main() {
    faster;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
