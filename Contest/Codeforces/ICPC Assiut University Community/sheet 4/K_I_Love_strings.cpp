#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int n=s.size()+t.size();
        bool flag1=true, flag2=true;
        for(int i=0;i<n;i++){
            if(s.size()!=i && flag1){
                cout<<s[i];
            }
            else{
                flag1=false;
            }

            if(t.size()!=i && flag2){
                cout<<t[i];
            }
            else{
                flag2=false;
            }
        }
        cout<<nl;
    }
    return 0;
}