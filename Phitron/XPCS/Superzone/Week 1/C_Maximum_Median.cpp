#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int n;
ll k;
vector<ll> a;

bool canMakeMedian(ll m) {
    ll ops = 0;
    for (int i = n / 2; i < n; i++) {
        if (a[i] < m) ops += m - a[i];
        if (ops > k) return false;
    }
    return ops <= k;
}

void solve()
{
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    ll left = a[n/2], right = a[n/2] + k, answer = left;
    while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (canMakeMedian(mid)) {
            answer = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << answer << nl;
}

int32_t main()
{
    faster;
    int tt = 1;
    while(tt--)
        solve();
    return 0;
}
