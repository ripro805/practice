#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
}
int32_t main()
{
    faster;
        int t;
    cin >> t;  

    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];  
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];  
        }

        int b_val = b[0]; 

        bool flag = true;
        int previous = min(a[0], b_val - a[0]);  

        for (int i = 1; i < n; i++) {
            int curr = a[i];
            int op1 = curr;  
            int op2 = b_val - curr; 

            vector<int> res;

            if (op1 >= previous) {
                res.push_back(op1);  
            }
            if (op2 >= previous) {
                res.push_back(op2);  
            }

            if (res.empty()) {
                flag = false;
                break;
            }

            previous = *min_element(res.begin(), res.end());
        }

        if (flag) {
            cout << "YES"<<nl;
        } else {
            cout << "NO"<<nl;
        }
    }
    return 0;
}