#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    if (s.length() != a + b + 1)
    {
        cout << "No" << nl;
        return 0;
    }
    if (s[a] != '-')
    {
        cout << "No" << nl;
        return 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (i == a)
        {
            continue;
        }
        if (s[i] < '0' || s[i] > '9')
        {
            cout << "No" << nl;
            return 0;
        }
    }
    cout << "Yes" << nl;
    return 0;
}