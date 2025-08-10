#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int val = a[i];
        if (mp[val] != 0)
        {
            ans++;

            while (mp[val] > 0)
            {
                mp[val]--;
                val++;
            }
        }
    }
    cout << ans << nl;
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