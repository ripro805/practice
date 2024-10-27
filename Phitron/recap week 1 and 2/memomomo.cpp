#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
   long long a,b,k;
   cin>>a>>b>>k;
   if(a%k==0 && b%k==0)
   {
    cout<<"Both"<<endl;
   }
   else if(a%k==0 && b%k!=0)
   {
    cout<<"Memo"<<endl;
   }
   else if(a%k!=0 && b%k==0)
   {
    cout<<"Momo"<<endl;
   }
   else if(a%k!=0 && b%k!=0)
   {
    cout<<"No One"<<endl;
   }
    return 0;
}
