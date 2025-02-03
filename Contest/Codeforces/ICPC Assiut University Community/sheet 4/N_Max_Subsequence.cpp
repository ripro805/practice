#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n;
    cin>>n;

    string s;
    cin>>s;
    int tmp;
    int cnt=0;

    for(int i=0;i<n;i++){
        if(i==0){
            tmp=s[i];
            cnt++;
        }
        else{
            if(s[i]!=tmp){
                cnt++;
                tmp=s[i];
            }
        }
    }
    cout<<cnt<<nl;

    return 0;
}