#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
ll dp[1005];
ll fib(ll n){
    if(n<2){
        return n; 
    }
    if(dp[n]!=-1)
    return dp[n];
   dp[n]= fib(n-1)+fib(n-2);
   return dp[n];
   
}
int32_t main()
{
    faster;
    memset(dp,-1,sizeof(dp));
    ll n;
    cin>>n;
  cout<<fib(n)<<nl;
    return 0;
}