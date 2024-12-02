#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin>>t;
    while(t--){
        string s;
    cin>>s;
    int sum1=0,sum2=0;
    int len=s.size();
    for(int i=0;s[i]!='\0';i++){
        sum1=sum1+s[0]+s[1]+s[2];
        sum2=sum2+s[len-1]+s[len-2]+s[len-3];

    }
    if(sum1==sum2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}