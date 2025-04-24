#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   ll n;
   cin>>n;
   ll tetra[n+1];
   tetra[0]=0;
   tetra[1]=1;
   tetra[2]=1;
   tetra[3]=2;
   for(int i=4;i<=n;i++){
    tetra[i]=tetra[i-1]+tetra[i-2]+tetra[i-3]+tetra[i-4];
   }
   cout<<tetra[n]<<nl;
    return 0;
}