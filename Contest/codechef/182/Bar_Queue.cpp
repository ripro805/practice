#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int b=0,g=0,cnt=0;
    for (int i = 0; i < n; i++)
    {
       if(s[i]=='B') b++;
       else g++;
       cnt++;
        if(b>2*g) break;
       
    }
    cout<<cnt<<nl;
    
    
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