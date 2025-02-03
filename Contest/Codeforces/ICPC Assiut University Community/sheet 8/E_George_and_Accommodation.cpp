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
   int cnt=0;
   while(n--){
    int p,q;
    cin>>p>>q;
    if(q-p>=2) cnt++;
   }
   cout<<cnt<<nl;
    return 0;
}