#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve()
{
    ll n;
    ll x;  
    cin >> n >> x;

    vector<ll> vec(n + 1, 0);
    vector<bool> used(n + 1, false);

    ll i = 1;
    while (i <= n) {
        if (vec[i] == 0) {
            ll j = i ^ x;
            if (j >= 1 && j <= n && vec[j] == 0 && j != i) {
                vec[i] = j;
                vec[j] = i;
                used[i] = true;
                used[j] = true;
            }
        }
        i++;
    }

    vector<ll> val;
    ll v = 1;
    while (v <= n) {
        if (!used[v]) {
            val.push_back(v);
        }
        v++;
    }

    ll idx = 0;
    i = 1;
    while (i <= n) {
        if (vec[i] == 0) {
            vec[i] = val[idx++];
        }
        i++;
    }

    i = 1;
    while (i <= n) {
        cout << vec[i];
        if (i != n) {
            cout << ' '; 
        } else {
            cout <<nl;
        }
        i++;
    }
}

int32_t main()
{
    faster;
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
