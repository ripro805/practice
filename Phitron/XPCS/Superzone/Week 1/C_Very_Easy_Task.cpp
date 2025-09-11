#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    
    ll first = min(x, y);
    if (n == 1) { 
        cout << first << "\n";
        return;
    }
    
    ll nd = n - 1;
    ll lo = 0, hi = 1;
    
    while ((hi / x) + (hi / y) < nd) hi *= 2;
    
    while (lo < hi) {
        ll mid = lo + (hi - lo) / 2;
        if ((mid / x) + (mid / y) >= nd) hi = mid;
        else lo = mid + 1;
    }
    
    cout << (first + lo) << "\n";
}

int32_t main() {
    faster;
    solve();   
    return 0;
}
