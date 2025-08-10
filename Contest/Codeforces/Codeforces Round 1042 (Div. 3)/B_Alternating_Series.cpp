#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        a[i] = (i % 2 == 0 ? -1 : 3);
    }

    if (n % 2 == 0) {
        if (n == 2) {
            a[1] = 2;
        } else {
            a[n - 1] = 2;
        }
    }

    for (int x : a) cout << x << " ";
    cout << nl;
}
int32_t main()
{
    faster;
    int tt;
    cin >> tt;
    while(tt--)
        solve();
    return 0;
}