#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n, h;
    cin >> n >> h;

    ll d1 = 0, d2 = 0;

    for (int i = 0; i < n; i++) {
        int s, d;
        cin >> s >> d;
        if (s == 1) {
            d1 = max(d1, 1LL * d);
        } else {
            d2 = max(d2, 1LL * d);
        }
    }

    if (d1 == 0) {
        cout << 2 * ((h + d2 - 1) / d2) << '\n';
        return;
    }
    if (d2 == 0) {
        cout << (h + d1 - 1) / d1 << '\n';
        return;
    }

    if (d1 * 2 >= d2) {
        cout << (h + d1 - 1) / d1 << '\n';
        return;
    }

    ll maxi = 1e18;
    ll k = h / d2;

    for (ll i = k; i <= k + 1; i++) {
        if (i < 0) return;

        ll rem = h - i * d2;
        if (rem <= 0) {
            maxi = min(maxi, 2 * i);
        } else {
            ll k = (rem + d1 - 1) / d1;
            maxi = min(maxi, 2 * i + k);
        }
    }

    cout << maxi << '\n';
}

int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solve(i);
    return 0;
}