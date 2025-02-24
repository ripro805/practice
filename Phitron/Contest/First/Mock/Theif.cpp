#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int main() {
    faster;
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;  

        map<int, int> freq; 

        for (int i = 0; i < n; i++) {
            int pearl;
            cin >> pearl;
            freq[pearl]++;  
        }

        int detected_p = 0;
        for (auto &entry : freq) {
            if (entry.second % 2 == 1) {  
                detected_p = entry.first;
                break;
            }
        }

        cout << detected_p << nl;  
    }

    return 0;
}
