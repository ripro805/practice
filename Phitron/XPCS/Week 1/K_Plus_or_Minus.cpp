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
    int a,b,c;
    cin>>a>>b>>c;
    if(c==a+b){
        cout<<"+"<<nl;
    }
    else{
        cout<<"-"<<nl;
    }
   }
    return 0;
}