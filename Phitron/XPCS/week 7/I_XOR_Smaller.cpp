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

        for (int &x : a) cin >> x;

        int frst = a[0];

        for (int i = 1; i < n; ++i) {
            frst &= a[i];
        }

        cout << frst << '\n';
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