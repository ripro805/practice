#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int make_palin(string s, char del)
{
    int l = 0, r = s.size() - 1;
    int cnt = 0;
    while (l < r)
    {
        if (s[l] == s[r])
            l++, r--;
        else if (s[l] == del)
            l++, cnt++;
        else if (s[r] == del)
            r--, cnt++;
        else
            return INT_MAX;
    }
    return cnt;
}
void solve(int t_case)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (equal(s.begin(), s.begin() + n / 2, s.rbegin()))
    {
        cout << 0 << nl;
        return;
    }
    int ans = INT_MAX;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        int res = make_palin(s, ch);
        ans = min(ans, res);
    }
    if (ans == INT_MAX)
        cout << -1 << nl;
    else
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