#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
long long Fact(long long n)

{
    if(n==1){
        return 1;
    }
    return n* Fact(n-1);
}
int32_t main()
{
   long long  n;
    cin>>n;
  
   cout<<Fact(n)<<endl;

    return 0;
}