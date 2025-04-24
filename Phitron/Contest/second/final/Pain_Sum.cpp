#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

ll Sum(ll x) {
    if (x == 0) return 0;  
    ll n = x / 3; 
    ll remainder = x % 3; 
    return (n * (n + 1) * 3) / 2 + remainder * (n + 1);
}

int32_t main() {
    faster;
    ll n ,q;
    cin >> n>> q;
    while (q--) {
        ll l, r;
        cin >> l >> r;
        cout << Sum(r) - Sum(l - 1) << nl;
    }
    return 0;
}
