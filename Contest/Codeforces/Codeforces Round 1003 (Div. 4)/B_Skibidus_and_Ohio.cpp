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
        bool flag=false;
        int n = s.size();
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                flag=true;
                break;
            }
        }
        if(flag) cout<<"1"<<nl;
        else cout<<n<<nl;
    }
    return 0;
}
