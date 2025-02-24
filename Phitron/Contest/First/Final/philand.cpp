#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int main() 
{
    faster;
    string s;
    getline(cin, s);

    if (s[0] >= 'A' && s[0] <= 'Z') {
        s[0] = s[0] + ('a' - 'A'); 
    }

    reverse(s.begin(), s.end()); 
    cout << s << nl;
    
    return 0;
}
