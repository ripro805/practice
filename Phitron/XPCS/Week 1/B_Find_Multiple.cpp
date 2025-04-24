#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   int a,b,c;
   cin>>a>>b>>c;
   for(int i=a;i<=b;i++){
    if(i%c==0){
        cout<<i<<nl;
        return 0;
    }
   }
   cout<<-1<<nl;
    return 0;
}