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
    vector<string> name;  

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        auto it = find(name.begin(), name.end(), s);

        if (it != name.end()) {
           
           cout<<"YES"<<nl;
        }
        else {
            cout<<"NO"<<nl;
            name.push_back(s);
}
        
    }
    

    
    return 0;
}