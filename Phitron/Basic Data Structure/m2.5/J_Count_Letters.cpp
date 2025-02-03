#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main() {
    faster;

    string s;
    cin >> s;

    vector<int> count(26);

    for (char ch : s) {
        count[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            cout << char(i + 'a') << " : " << count[i] << nl;
        }
    }

    return 0;
}
