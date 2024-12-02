#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   long long a,b,c,d;
   cin>>a>>b>>c>>d;
   if(a+b-c==d||a+b*c==d||a*b+c==d||a*b-c==d||a-b+c==d||a-b*c==d){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
    return 0;
}
