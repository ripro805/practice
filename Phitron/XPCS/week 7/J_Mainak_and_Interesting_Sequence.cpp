#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n, m;
    cin >> n >> m;
    if (n > m)
    {
        cout << "NO" << nl;
        return;
    }
    vector<int> ans(n + 1);
    int sum = 0;
    if (n % 2 == 0 && m % 2 == 0)
    {
        cout << "YES" << nl;
        for (int i = 1; i <= n - 2; i++)
        {
            ans[i] = 1;
            sum++;
            
        }
        ans[n - 1] = (m -sum ) / 2;
        ans[n] = ans[n - 1];
    }
    else if (n % 2 == 1 && m % 2 == 0)
    {
        cout << "YES" << nl;
        for (int i = 1; i <= n - 1; i++)
        {
            ans[i] = 1;
            sum++;
        }
        ans[n] = m - sum;
    }
    else if (n % 2 == 0 && m % 2 == 1)
    {
        cout << "NO" << nl;
        return;
    }
    else if (n % 2 == 1 && m % 2 == 1)
    {
        cout << "YES" << nl;
        for (int i = 1; i <= n - 1; i++)
        {
            ans[i] = 1;
            sum++;
        }
        ans[n] = m - sum;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << nl;
}
int32_t main()
{
    faster;
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}