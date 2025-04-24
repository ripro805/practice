#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    vector<string> ans;
  
        int n;
        string s;
        cin >> n >> s;
        
        int cnt_0 = 0, cnt_1 = 0, equ = 0;
        
        for (char x : s) {
            if (x == '0') cnt_0++;
            else cnt_1++;
            if (cnt_0 == cnt_1) equ++;
        }
        
        ans.push_back(to_string(1 << equ));  
    
    
    for (auto &res : ans) {
        cout << res << "\n";
    }
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