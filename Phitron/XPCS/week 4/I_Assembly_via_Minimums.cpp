#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve() {
    int n;
    cin >> n;

    int tot = (n * (n - 1)) / 2;
    vector<int> a(tot);

    for (int i = 0; i < tot; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int last = 0;
    for (int i = 1; i < n; i++) {
        cout << a[last] << " ";
        last += (n - i);
    }

    cout << (int)1e9 << nl;

    return;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}