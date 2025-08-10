#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    if (s == t || s[0] == '1') {
        cout << "YES" << nl;
        return;
    }

    int pos = -1;
    int i = 0;
    while (i < n) {
        if (s[i] == '1') {
            pos = i;
            break;
        }
        i++;
    }

    if (pos == -1) {
        cout << "NO" << nl;
        return;
    }

    bool flag = true;
    i = 0;
    while (i < n) {
        if (s[i] != t[i]) {
            if (i < pos) {
                flag = false;
                break;
            }
        }
        i++;
    }

    if (flag) cout << "YES" << nl;
    else cout << "NO" << nl;
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
