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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        bool str[26]={};
        for(int i=0;s[i]!='\0';i++){
           if(!str[s[i]-'A']){
            cnt+=2;
            str[s[i]-'A']=true;
           }
           else{
            cnt++;
           }

        }
        cout<<cnt<<endl;
    }
    return 0;
} 