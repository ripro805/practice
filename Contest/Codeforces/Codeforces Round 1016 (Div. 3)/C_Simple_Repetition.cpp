#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve(int t_case)
{
    ll x;
    int k;
    cin >> x >> k;

    if (k == 1) {
        bool prime = true;
        if (x < 2) {
            prime = false;
        } else if (x == 2) {
            prime = true;
        } else if (x % 2 == 0) {
            prime = false;
        } else {
            for (ll i = 3; i * i <= x; i += 2) {
                if (x % i == 0) {
                    prime = false;
                    break;
                }
            }
        }
        cout << (prime ? "YES\n" : "NO\n");
    } else {
        cout << ((x == 1 && k == 2) ? "YES\n" : "NO\n");
    }
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solve(i);
    return 0;
}