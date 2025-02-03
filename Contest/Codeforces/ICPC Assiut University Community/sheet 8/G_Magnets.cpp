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
   vector<string>mag(n);
   for(int i=0;i<n;i++)
   {
    cin>>mag[i];
   }
   int cnt=1;
   for(int i=1;i<n;i++){
    if(mag[i]!=mag[i-1])
     cnt++;
   }
   cout<<cnt<<nl;
    return 0;
}