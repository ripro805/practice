#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   int a,b;
   cin>>a>>b;
   while(b!=0){
    int temp=b;
    b=a%b;
    a=temp;
   }
   cout<<a<<endl;
    return 0;
}