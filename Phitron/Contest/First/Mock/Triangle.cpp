#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int a, b, c;
    cin >> a >> b >> c;

    if (a > 0 && a == b && b == c) {
        cout << "Yes" << nl;
    } else {
        cout << "No" << nl;
    }

    return 0;
}
