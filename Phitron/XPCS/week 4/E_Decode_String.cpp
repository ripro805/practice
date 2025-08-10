#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n;
    string s;
    cin>>n>>s;
    string res;
    int i=n-1;
    while(i>=0){
        if(s[i]=='0'){
            int num=(s[i-2]-'0')*10+(s[i-1]-'0');
            res+=char('a'+num-1);
            i-=3;
        }
        else{
            int num=s[i]-'0';
            res+=char('a'+num-1);
            i--;
        }
    }
    reverse(res.begin(),res.end());
    cout<<res<<nl;
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