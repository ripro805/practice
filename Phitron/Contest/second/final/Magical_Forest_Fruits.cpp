#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << arr[r] - arr[l - 1] << nl;
    }
    return 0;
}