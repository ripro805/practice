#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
 
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int32_t main()
{
   long d;
   cin>>d;
   long y=d/365;
   long r=d%365;
   long m=r/30;
   long o=r%30;
   cout<<y<<" years"<<endl;
   cout<<m<<" months"<<endl;
   cout<<o<<" days"<<endl;
    return 0;
}