#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int val[1005], weight[1005];
int dp[10005][10005];
int knapsack(int i, int mx_weight)
{
    if (i < 0 || mx_weight <= 0)
        return 0;
    if (dp[i][mx_weight] != -1)
        return dp[i][mx_weight];
    if (weight[i] <= mx_weight)
    {
        int op1 = knapsack(i - 1, mx_weight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, mx_weight);
        dp[i][mx_weight] = max(op1, op2);
        return dp[i][mx_weight];
    }
    else
    {
        dp[i][mx_weight] = knapsack(i - 1, mx_weight);
        return dp[i][mx_weight];
    }
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, mx_w;
        cin >> n >> mx_w;
        for (int i = 0; i < n; i++)
            cin >> weight[i];

        for (int i = 0; i < n; i++)
            cin >> val[i];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= mx_w; j++)
            {
                dp[i][j] = -1;
            }
        }
        cout << knapsack(n - 1, mx_w) << nl;
    }
    return 0;
}