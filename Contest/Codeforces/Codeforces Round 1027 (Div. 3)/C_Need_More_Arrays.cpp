#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
      int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int lst = INT_MIN;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > lst + 1) {
            cnt++;
            lst = arr[i];
        }
    }

    cout << cnt << nl;
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