#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
ll dp[35];
ll tetra(ll n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (n == 3) return 2;
    if(dp[n]!=-1)
    return dp[n];
   dp[n]= tetra(n-1)+tetra(n-2)+tetra(n-3)+tetra(n-4);
   return dp[n];
   
}
int32_t main()
{
    faster;
    memset(dp,-1,sizeof(dp));
    ll n;
    cin>>n;
  cout<<tetra(n)<<nl;
    return 0;
}