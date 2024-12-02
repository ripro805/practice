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
        string s;
        cin>>s;
        int len=s.size();
        int num=0;
        for(int i=0;i<len;i++){
            num++;

        }
        if(num>10){
            cout<<s[0]<<num-2<<s[len-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}