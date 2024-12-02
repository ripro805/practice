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
        string s, x;
        cin >> s >> x;
         
        size_t pos = s.find(x);
        while (pos != string::npos) {
            s.replace(pos, x.length(), "#");
            pos = s.find(x, pos + 1);  
        }

        cout << s << nl; 
    }
    return 0;
}
