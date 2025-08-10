#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nl "\n"
#define nfs ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n + 1), nxt_occ(n + 2), lst_sn(n + 2, n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    for (int i = n; i >= 1; --i) {
        nxt_occ[i] = lst_sn[arr[i]];
        lst_sn[arr[i]] = i;
    }

    int curr = 1, sgmnt = 0;

    while (curr <= n) {
        int sgmnt_end = curr, mx_rch = curr;

        while (true) {
            for (int i = curr; i <= sgmnt_end; i++) {
                mx_rch = max(mx_rch, nxt_occ[i]);
            }

            sgmnt++;

            if (mx_rch > n) break;

            curr = sgmnt_end + 1;
            sgmnt_end = mx_rch;
        }

        break;
    }

    cout << sgmnt << nl;
}

int32_t main() {
    nfs;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
