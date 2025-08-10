#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll l = 0, r = 0, sum = 0;
    ll ans = LLONG_MAX;

    while (r < n) {
        sum += arr[r];

        while (sum >= s) {
            ans = min(ans, r - l + 1);
            sum -= arr[l];
            l++;
        }

        r++;
    }

    if (ans == LLONG_MAX)
        cout << -1 << nl;
    else
        cout << ans << nl;
}

int32_t main()
{
    faster;
    solve();
    return 0;
}
