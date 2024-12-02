#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    int t;
    while (t--){
        string s;
        cin>>s;
        bool isGood =false;
        for (int i=0;i<=s.length()-3;i++){
            if(s[i]=='0'&& s[i+1]=='1'&& s[i+2]=='0'){
                isGood=true;
                break;
            }
            if(s[i]=='1'&& s[i+1]=='0'&& s[i+2]=='1'){
                isGood=true;
                break;
            }
        }
        if(isGood){
            cout<<"Good"<<endl;
        }
        else{
            cout<<"Bad"<<endl;
        }
    }
    return 0;
}