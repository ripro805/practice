#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
   int n;
   cin>>n;
   long long fib[n];
   fib[1]=0;
   fib[2]=1;
   for( int i=3;i<=n;i++){
    fib[i]=fib[i-1]+fib[i-2];
   }
   cout<<fib[n]<<endl;


   
    return 0;
}