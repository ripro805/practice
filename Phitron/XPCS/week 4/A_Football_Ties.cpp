#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int x, y;
    cin >> x >> y;
    int d = 0;
    while (1)
    {
        if (x - d >= 0 && y - d >= 0 && (x - d) % 3 == 0 && (y - d) % 3 == 0)
        {
            cout << d << nl;
            break;
        }
        d++;
    }
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