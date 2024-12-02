#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   char c;
   cin>>c;
   if(c>='a' &&c<'z'){
    cout<<char(c+1)<<endl;
   }
   if(c=='z'){
    cout<<'a'<<endl;
   }
    return 0;
}
