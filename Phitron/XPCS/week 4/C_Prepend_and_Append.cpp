#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l=0,r=n-1,ans=n;
    while(l<=r){
        if(s[l]==s[r]) break;
        else{
            ans-=2;
            l++,r--;
        }
    }
    cout<<ans<<nl;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}
