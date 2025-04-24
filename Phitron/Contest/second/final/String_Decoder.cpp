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
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i += 2) {
            char c = s[i];
            int freq = s[i + 1] - '0';
            for (int j = 0; j < freq; j++) {
                cout << c;
            }
        }
        cout << nl;
    }
    return 0;
}
