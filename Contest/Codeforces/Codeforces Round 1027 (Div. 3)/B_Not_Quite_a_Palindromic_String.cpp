#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int zero = count(s.begin(), s.end(), '0');
    int one = n - zero;

    int tot_pair = n / 2;
    
    int bad_pair = tot_pair - k;

    if (zero < bad_pair || one < bad_pair) {
        cout << "NO"<<nl;
        return;
    }

    int rem_zeros = zero - bad_pair;
    int remaining_ones_for_good = one - bad_pair;

    int poss_good_pair_of_z = rem_zeros / 2;
    int poss_good_pair_of_o = remaining_ones_for_good / 2;

    int max_pair = poss_good_pair_of_z + poss_good_pair_of_o;

    if (max_pair >= k) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
}

int32_t main() {
    faster;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
