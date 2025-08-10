#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
       int n;
        ll k;
        cin >> n >> k;
        vector<ll> s(n), t(n);
        for (int i = 0; i < n; i++) cin >> s[i];
        for (int i = 0; i < n; i++) cin >> t[i];

        if (k == 0) {
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            if (s == t) cout << "YES\n" ;
            else cout << "NO\n";
            return;
        }

       unordered_map<ll, int> cnt;

        for (auto &x : s) {
            ll r = x % k;
            if (r < 0) r += k;
            r = min(r, k - r);
            cnt[r]++;
        }

        for (auto &x : t) {
            ll r = x % k;
            if (r < 0) r += k;
            r = min(r, k - r);
            cnt[r]--;
        }

        bool ok = true;
        for (auto &p : cnt) {
            if (p.second != 0) { ok = false; break; }
        }
        if (ok) cout << "YES\n"; 
        else cout << "NO\n";
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