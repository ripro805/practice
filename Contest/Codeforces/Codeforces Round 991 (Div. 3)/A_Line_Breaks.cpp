#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
class KostyaStrips {
private:
    int t;  

public:
   
    void solve() {
        cin >> t;
        while (t--) {
            int n, m;
            cin >> n >> m;
            string wrd[50]; 

            for (int i = 0; i < n; ++i) {
                cin >> wrd[i];
            }

            int full_len = 0, max_wrd = 0;
            for (int i = 0; i < n; ++i) {
                int wrd_len = wrd[i].length();
                if (full_len + wrd_len <= m) {
                    full_len += wrd_len;
                    max_wrd++;
                } else {
                    break;
                }
            }

            cout << max_wrd << nl;
        }
    }
};

int main() {
    KostyaStrips ks;
    ks.solve();
    return 0;
}
