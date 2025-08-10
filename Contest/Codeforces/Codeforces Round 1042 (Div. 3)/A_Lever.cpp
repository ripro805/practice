#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
     int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int it = 0;
        while (true) {
            bool stp_1 = false;
            for (int i = 0; i < n; i++) {
                if (a[i] > b[i]) {
                    a[i]--;
                    stp_1 = true;
                    break;
                }
            }
            bool stp_2 = false;
            for (int i = 0; i < n; i++) {
                if (a[i] < b[i]) {
                    a[i]++;
                    stp_2 = true;
                    break;
                }
            }
            it++;
            if (!stp_1) break;
        }
        cout << it << "\n";
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