#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    string s;
    cin >> s;

    bool freq[26] = {false}; 
    string result = "";

    for (char c : s) {
        if (!freq[c - 'a']) {
            freq[c - 'a'] = true;
            result += c;
        }
    }

    sort(result.begin(), result.end()); 
    cout << result << "\n";
    return 0;
}