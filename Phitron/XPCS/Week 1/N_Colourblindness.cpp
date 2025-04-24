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
        int n;
    cin >> n;

    string a, b;
    cin >> a >> b;
    bool is_equal=true;  

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i] && !(a[i] == 'B' && b[i] == 'G') && !(a[i] == 'G' && b[i] == 'B')) {
            is_equal=false;
            break;
        
        }
    }
    
    if((is_equal)){
        cout << "YES" << nl;  
    }
    else{
        cout<<"NO"<<nl;
    }
    }
    return 0;
}
