#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int dp[100000 + 5];
bool canReach(int st, int tar)
{

    if (st == tar)
        return true;
    if (st > tar)
        return false;

    if (dp[st] != -1)
        return dp[st];
    int l = canReach(st + 3, tar);
    int r = canReach(st * 2, tar);
    dp[st] = l || r;
    return dp[st];
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            dp[i] = -1;
        }
        if (canReach(1, n))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}