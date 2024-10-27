#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int main()
{ 
   long a,b;
   cin>>a>>b;
   double div=(double) a/b;
   cout<<"floor "<<a<<" / "<<b<<" = "<<floor(div)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(div)<<endl;
     cout<<"round "<<a<<" / "<<b<<" = "<<round(div)<<endl;
    return 0;
}
