#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
vector<ll> pref_sum(const vector<ll>& arr) {
    int n = (int)arr.size();
    vector<ll> ps(n + 1, 0);
    for (int i = 0; i < n; ++i) ps[i + 1] = ps[i] + arr[i];
    return ps;
}

vector<ll> build_v(const string& s) {
    int n = (int)s.size();
    vector<ll> pref_ones(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref_ones[i + 1] = pref_ones[i] + (s[i] - '0');
    }
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        v[i] = 2 * pref_ones[i + 1] - (i + 1);
    }
    return v;
}

void solve() {
    int n; 
    cin >> n;
    string a, b;
    cin >> a >> b;

    vector<ll> va = build_v(a);
    vector<ll> vb = build_v(b);

    sort(vb.begin(), vb.end());
    vector<ll> ps_vb = pref_sum(vb);

    ll tot_sum_vb = ps_vb.back();

    ll abs_sum = 0;
    for (ll c : va) {
        int k = int(lower_bound(vb.begin(), vb.end(), -c) - vb.begin());
        abs_sum += c * (n - 2 * k) + tot_sum_vb - 2 * ps_vb[k];
    }

    ll tot_xy_sum = 1LL * n * n * (n + 1);
    ll ans = (tot_xy_sum - abs_sum) / 2;

    cout << ans << nl;
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






