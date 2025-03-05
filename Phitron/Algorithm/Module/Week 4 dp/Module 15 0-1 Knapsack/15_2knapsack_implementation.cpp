#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int v[1005], w[1005];
int knapsack(int i, int mx_w)
{
    if (i < 0 || mx_w <= 0)
        return 0;

    if (w[i] <= mx_w)
    {
        // 2 ta option
        // 1. bag a rakhbo, 2 bag a rakhbo na
        int op1 = knapsack(i - 1, mx_w - w[i]) + v[i];
        int op2 = knapsack(i - 1, mx_w);
        return max(op1, op2);
    }
    else
    {
        // 1 ta option
        // bag a rakhbo na
        return knapsack(i - 1, mx_w);
    }
}
int32_t main()
{
    faster;
    int n, max_w;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    cin >> max_w;
    cout << knapsack(n - 1, max_w) << nl;
    ;
    return 0;
}