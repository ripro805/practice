#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{  
long long x,y,sum,mul,sub;
cin>>x>>y;
sum=x+y;
mul=x*y;
sub=x-y;
cout<<x<<" + "<<y<<" = "<<sum<<endl;
cout<<x<<" * "<<y<<" = "<<mul<<endl;
cout<<x<<" - "<<y<<" = "<<sub<<endl;
   
    return 0;
}