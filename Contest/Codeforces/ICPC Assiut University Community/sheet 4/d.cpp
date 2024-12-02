#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   string a,b;
   getline(cin,a);
   getline(cin,b);
   string c=a+b;
   cout<<a.size()<<" "<<b.size()<<endl;
   cout<<c<<endl;
   swap(a[0],b[0]);
   cout<<a<<" "<<b<<endl;
    return 0;
}
