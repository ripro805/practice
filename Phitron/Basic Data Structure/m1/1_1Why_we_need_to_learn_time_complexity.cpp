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
   //1.1
   int sum1=0;
   for(int i=1;i<=100;i++){
    sum1+=i;
   }
   cout<<sum1<<endl;
   cout<<nl;
   //1.2
    int sum2=n*(n+1)/2;
    cout<<sum2<<endl;
    return 0;
}

//for solve a code in a better way