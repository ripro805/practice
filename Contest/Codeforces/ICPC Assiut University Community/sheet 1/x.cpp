#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
   long long l1,l2,r1,r2;
   cin>>l1>>r1>>l2>>r2;
   long long l_bound=max(l1,l2);
   long long r_bound=min(r1,r2);

   if(l_bound<=r_bound){
    cout<<l_bound<<" "<<r_bound<<endl;
   }
   else{
    cout<<"-1"<<endl;
   }
    return 0;
}
