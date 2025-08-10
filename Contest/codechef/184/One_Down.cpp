#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n;
    cin>>n;
    string s,tt;
    cin>>s>>tt;
    int cnt_s=0,cnt_tt=0;
    bool flag=true;
    for(int i =0;i<n;i++){
        if(s[i]=='1') cnt_s++;
        if(tt[i]=='1') {
            cnt_tt++;
            if(s[i]=='0') flag=false;
        }
       
    }
    if(cnt_s<cnt_tt|| (cnt_s-cnt_tt)%2!=0) flag=false;

    if(flag) cout<<"Yes"<<nl;
    else cout<<"No"<<nl;


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