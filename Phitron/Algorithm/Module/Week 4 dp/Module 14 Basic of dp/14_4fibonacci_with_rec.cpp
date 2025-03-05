#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int fib(int n){
    if(n<2){
        return n; 
    }
    return fib(n-1)+fib(n-2);
   
}
int32_t main()
{
    faster;
  cout<<fib(5)<<nl;
    return 0;
}