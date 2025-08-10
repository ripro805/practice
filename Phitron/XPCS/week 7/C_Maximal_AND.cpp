#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

const int B = 30;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
  
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> bits(B + 1);

    for (int i = 0; i < n; i++) {
        for (int j = B; j >= 0; j--) {
            if ((a[i] >> j) & 1) {
                bits[j]++;
            }
        }
    }

    ll ans = 0;
    for (int j = B; j >= 0; j--) {
        if (bits[j] == n) {
            ans += (1LL << j);
        }
        else {
            int need = n - bits[j];
            if (k >= need) {
                ans += (1LL << j);
                k -= need;
            }
        }
    }

    cout << ans << nl;
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
