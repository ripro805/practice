#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
string recipe;
ll nb, ns, nc;
ll pb, ps, pc;
ll r;

ll ndB = 0, ndS = 0, ndC = 0;

bool can_make(ll x) {
    __int128 cst = 0;
    if (x * ndB > nb) cst += (x * ndB - nb) * pb;
    if (x * ndS > ns) cst += (x * ndS - ns) * ps;
    if (x * ndC > nc) cst += (x * ndC - nc) * pc;
    return cst <= r;
}

void solve() {
    cin >> recipe;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    for (char ch : recipe) {
        if (ch == 'B') ndB++;
        else if (ch == 'S') ndS++;
        else if (ch == 'C') ndC++;
    }

    ll lo = 0, hi = 1e13, ans = 0;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (can_make(mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    faster;
    solve();  
    return 0;
}
