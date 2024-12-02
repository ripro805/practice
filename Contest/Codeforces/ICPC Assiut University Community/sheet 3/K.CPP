#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
   
   long long n;
   cin>>n;
   int m;
   cin>>m;
   //digit sum oita sum output
   int sum=0;
   for(int i =0;i<=n;i++){
     sum+=m[i];
   }
   for(int i =0;i<=n;i++){
     cout<<sum<<endl;
   }
   
    return 0;
}
