#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (auto &x : arr)
        cin >> x;

    vector<ll> bits(30, 0);
    for (ll i = 0; i < n; i++)
    {
        ll ele = arr[i];
        ll p = 0;
        while (ele > 0)
        {
            bits[p] += ele % 2;
            p++;
            ele /= 2;
        }
    }

    ll ans = 0;
    for (ll i = 0; i < 30; i++)
    {
        if (bits[i] % 2 != 0)
            ans += (1 << i);
    }

    for (ll i = 0; i < n; i++)
    {
        ll ele = arr[i];
        ll p = 0;
        while (ele > 0)
        {
            bits[p] -= ele % 2;
            p++;
            ele /= 2;
        }

        ll curr = 0;
        for (ll j = 0; j < 30; j++)
        {
            if (bits[j] % 2 != 0)
                curr += (1 << j);
        }

        ans = min(ans, curr);

        ele = arr[i];
        p = 0;
        while (ele > 0)
        {
            bits[p] += ele % 2;
            p++;
            ele /= 2;
        }
    }

    cout << ans << '\n';
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