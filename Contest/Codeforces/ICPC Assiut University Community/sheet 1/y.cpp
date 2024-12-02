#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    long long mul=a*b*c*d;
   long long res=mul%100;
    if(res<10){
        cout<<"0"<<res<<endl;
    }
    else{
        cout<<res<<endl;
    }
    return 0;
}