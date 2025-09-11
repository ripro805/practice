#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
struct Assistant {
    int t, z, y;
};

int m, n;
vector<Assistant> a;

long long balloons_in_time(const Assistant &as, long long T) {
    long long cycle_time = 1LL * as.t * as.z + as.y;
    long long full_cycles = T / cycle_time;
    long long rem = T % cycle_time;
    long long res = full_cycles * as.z + min(1LL * as.z, rem / as.t);
    return res;
}

bool can(long long T) {
    long long total = 0;
    for (auto &as : a) {
        total += balloons_in_time(as, T);
        if (total >= m) return true;
    }
    return total >= m;
}

void solve()
{
     cin >> m >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].t >> a[i].z >> a[i].y;
    }

    long long lo = 0, hi = 1e14, ans = -1;
    while (lo <= hi) {
        long long mid = (lo + hi) / 2;
        if (can(mid)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << ans << "\n";

    vector<long long> res(n);
    long long remaining = m;
    for (int i = 0; i < n; i++) {
        long long balloons = balloons_in_time(a[i], ans);
        res[i] = min((long long)balloons, remaining);
        remaining -= res[i];
    }

    for (int i = 0; i < n; i++) cout << res[i] << " ";
    cout << "\n";
}
int32_t main()
{
    faster;
    // int tt;
    // cin >> tt;
    // while(tt--)
        solve();
    return 0;
}