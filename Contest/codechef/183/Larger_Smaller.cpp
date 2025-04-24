#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve(int t_case)
{
    int n;
    cin >> n;
    vector<int> a(n);
    int mn = INT_MAX, mx = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    int good_count = max(0, mx - mn - 1);
    cout << good_count << nl;
}

int32_t main()
{
    faster;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}
