#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
bool subseq(const vector<int>& arr) {
        vector<bool> dp(3, false);

     for (int x : arr) {
        vector<bool> next_dp = dp;
        next_dp[x % 3] = true;
        for (int r = 0; r < 3; ++r) {
            if (dp[r]) {
                next_dp[(r + x) % 3] = true;
            }
        }
        dp = next_dp;
    }

    return dp[0];
}
void solve()
{
    int n;
        cin >> n;
        vector<int> arr(n);
        for (int &x : arr) cin >> x;
        cout << (subseq(arr) ? "Yes" : "No") << nl;
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