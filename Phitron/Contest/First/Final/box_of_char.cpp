#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main() {
    faster;
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        int v = 0, consonants = 0, d = 0;
        for (auto c : s) {
            if (c >= '0' && c <= '9') d++;
            else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') v++;
            else consonants++;
        }

        
        int b_V= (v + 1) / 2;
        int b_c = (consonants + 2) / 3;
        int  b_d = d; 
        int b=max(b_V,max(b_c,b_d));
        cout<<b<<nl;
       

       
    }
    return 0;
}
