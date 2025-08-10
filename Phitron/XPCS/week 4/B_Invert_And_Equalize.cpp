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
    int o=0,z=0;
    if(n==1) cout<<0<<nl;
    else{
        for(int i=0;i<n-1;i++){
           if(s[i]=='1'&& s[i+1]=='0') o++;
           if(s[i]=='0'&& s[i+1]=='1') z++;

        }
        int mx=max(z,o);
        cout<<mx<<nl;
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