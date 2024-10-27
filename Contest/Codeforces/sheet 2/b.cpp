#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    long long n;
    cin>>n;
    if(n==1){
        cout<<"-1"<<endl;
    }
    for (int i=1;i<=n;i++){
      if(i%2==0){
        cout<<i<<endl;
      }
      
    }
    return 0;
}
