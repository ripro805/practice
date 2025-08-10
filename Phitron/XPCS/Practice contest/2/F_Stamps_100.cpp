#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll frst=n;
    for(int i=0;i<n-2;i++){
        if(s[i]=='1'){
            frst=i;
            break;
        }
    }
    for(int i=frst+1;i<n;i++){
        s[i]='0';
    }
    cout<<s<<nl;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}