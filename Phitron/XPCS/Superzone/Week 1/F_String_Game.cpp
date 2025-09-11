#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
string t, p;
vector<int> ordr;

bool can_keep(int k) {
    int n = t.size();
    vector<bool> rmv(n, false);
    for (int i = 0; i < k; i++) {
        rmv[ordr[i] - 1] = true;  
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (rmv[i]) continue;
        if (j < (int)p.size() && t[i] == p[j]) {
            j++;
            if (j == (int)p.size()) return true;
        }
    }
    return j == (int)p.size();
}

void solve()
{
     cin >> t >> p;
    int n = t.size();
    ordr.resize(n);
    for (int i = 0; i < n; i++) cin >> ordr[i];

    int lo = 0, hi = n, ans = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (can_keep(mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << ans << "\n";
}
int32_t main()
{
    faster;
    // int tt;
    // cin >> tt;
    // while(tt--)
        solve();
    return 0;
}