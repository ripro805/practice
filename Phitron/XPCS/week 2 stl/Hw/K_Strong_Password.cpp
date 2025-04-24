#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    string s;
    cin>>s;
    bool flag=true;
    int n=s.size();
    for(int i=0;i<n-1;i++){
        cout<<s[i];
        
        if(s[i+1]==s[i]&& flag)
        {
            flag=false;
            if(s[i]=='a') cout<<"b";
            else cout<<"a";
        }

    }
    cout<<s[n-1];
    if(flag){
        if(s[n-1]=='a') cout<<"b";
        else cout<<"a";
    
    }
    cout<<nl;
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