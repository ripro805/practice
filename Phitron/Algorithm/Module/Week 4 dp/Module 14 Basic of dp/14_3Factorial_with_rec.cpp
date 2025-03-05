#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int fact(int n){
    if(n==1){
        return 1;
    }
    int res= fact(n-1);
    return res*n;
   
}
int32_t main()
{
    faster;
  cout<<fact(5)<<nl;
    return 0;
}