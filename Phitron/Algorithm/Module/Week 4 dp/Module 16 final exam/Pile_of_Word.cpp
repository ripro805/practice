#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin >> t;  
    
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;  
        
        
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        
       
        if (s1 == s2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}