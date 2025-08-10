#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve()
{
    ll n;
    cin >> n;
    vector<ll> b(n - 1);
    for (auto &it : b) cin >> it;

    vector<vector<int>> v(n, vector<int>(30, 0));

    for (int i = 29; i >= 0; i--) {
        if (b[0] & (1 << i)) {
            v[0][i] = 1;
            v[1][i] = 1;
        }
    }

    for (int j = 1; j < n - 1; j++) {
        for (int i = 29; i >= 0; i--) {
            if (b[j] & (1 << i)) {
                if (v[j][i] == -1) {
                    cout << -1 << nl;
                    return;
                }
                v[j][i] = 1;
                v[j + 1][i] = 1;
            }
        }
        for (int i = 29; i >= 0; i--) {
            if (v[j][i] == 1 && v[j + 1][i] != 1) {
                v[j + 1][i] = -1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        int ans = 0;
        for (int j = 29; j >= 0; j--) {
            if (v[i][j] == 1) {
                ans |= (1 << j);
            }
        }
        cout << ans << " ";
    }
    cout << nl;
}

int32_t main()
{
    faster;
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
