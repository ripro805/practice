#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    string s;
        cin >> s;

       
        int zeros = 0, max_num = 0;

        for (char c : s) {
            if (c == '0') {
                zeros++;
            } else {
                max_num = max(max_num, zeros + 1);
            }
        }

        cout << s.size() - max_num <<nl;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solve(i);
    return 0;
}