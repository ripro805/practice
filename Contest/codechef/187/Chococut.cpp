#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll tot = n * m;
    ll max_alice = 0;

    if (k == 0)
    {
        max_alice = tot; 
    }
    else if (k > tot)
    {
        max_alice = 0; 
    }
    else
    {
        ll i = 1;
        while (i < n)
        {
            ll bob = i * m;
            if (bob >= k)
                max_alice = max(max_alice, tot - bob);

            bob = (n - i) * m;
            if (bob >= k)
                max_alice = max(max_alice, tot - bob);

            i++;
        }

        ll j = 1;
        while (j < m)
        {
            ll bob = j * n;
            if (bob >= k)
                max_alice = max(max_alice, tot - bob);

            bob = (m - j) * n;
            if (bob >= k)
                max_alice = max(max_alice, tot - bob);

            j++;
        }
    }

    cout << max_alice << nl;
}

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
