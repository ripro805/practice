#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
   int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &x:a) cin >> x;

    int l = n, r = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            l = min(l, i);
            r = max(r, i);
        }
    }

    if (r - l + 1 <= x) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
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