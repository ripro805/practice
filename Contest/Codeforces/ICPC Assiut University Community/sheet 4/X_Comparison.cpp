#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    string s;
    cin>>s;
    int n=s.size();
    if(n==1){
        cout<<s<<nl;
        return 0;
    }
    string smallest=s;
    for(int i=1;i<n;i++){
        string x=s.substr(0,i);
        string y=s.substr(i);
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
         string combined=x+y;

         if(combined<smallest){
            smallest=combined;
         }
    }
    cout<<smallest<<nl;
   

    return 0;
}