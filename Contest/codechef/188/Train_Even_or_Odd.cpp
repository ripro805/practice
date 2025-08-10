#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    ll n;
        cin >> n; 

        vector<int> arr(n);
        for(auto &x:arr) cin>>x;
        ll odd = 0;  
        ll even = 0;
        ll i=0; 

     while(i<n) {
            if ((i&1) == 0) {
                odd += arr[i]; 
            } else {
                even += arr[i];
            }
            i++;
        }

        cout << max(odd, even) << nl;
    }

int32_t main()
{
    faster;
    int tt;
    cin >> tt;
    while(tt--)
        solve();
    return 0;
}