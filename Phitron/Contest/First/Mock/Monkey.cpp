#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int main() {
    faster;
    string s;

    while (getline(cin, s)) {
        if (s.empty()) continue; 

        string str;  
        for (char c : s) {
            if (c != ' ') {
                str += c;
            }
        }
        
        sort(str.begin(), str.end());
        
        cout << str << nl;
    }
    
    return 0;
}
