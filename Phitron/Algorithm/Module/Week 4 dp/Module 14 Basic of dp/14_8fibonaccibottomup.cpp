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
   ll fib[n+1];
   fib[0]=0;
   fib[1]=1;
   for(int i=2;i<=n;i++){
    fib[i]=fib[i-1]+fib[i-2];
   }
   cout<<fib[n]<<nl;
    return 0;
}