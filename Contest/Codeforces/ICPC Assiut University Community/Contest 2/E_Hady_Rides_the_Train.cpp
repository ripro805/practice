#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   ll seat;
   cin>>seat;
   ll row =seat/4;
   ll col;
   if(row%2==0){
    col=seat%4;
   }
   else{
    col=3-(seat%4);
   }
   cout<<row<<" "<<col<<nl;
    return 0;
}