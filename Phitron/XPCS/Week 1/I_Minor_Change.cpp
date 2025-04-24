#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    string s,t;
    cin>>s;
    cin>>t;
    int cnt=0;
    for(int i=0;i<t.size();i++){
        if(s[i]!=t[i]){
            cnt++;
        }
    }
    cout<<cnt<<nl;
    return 0;
}