#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
     int n;
    cin >> n;

    cout << 1 << " ";
    int i=3;
   while(i<n+1) {
        cout << i << " ";
        i++;
    }

    cout << 2 << nl;
}
int32_t main()
{
    faster;
    int tt;
    cin >> tt;
    while(tt--)
        solve();
    return 0;
}