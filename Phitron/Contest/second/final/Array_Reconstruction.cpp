#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n - 2);
        ll sum= 0;
        for (int i = 0; i < n - 2; i++) {
            cin >> arr[i];
            sum+= arr[i];
        }
        ll main_sum;
        cin >> main_sum;
        cout << (main_sum - sum+ 1) << nl;
    }
    return 0;
}
