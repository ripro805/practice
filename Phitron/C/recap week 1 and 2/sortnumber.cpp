#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
   long  a,b,c;
   cin>>a>>b>>c;
   if(a<=b && a<=c){
    if(b<=c){
        cout<<a<<"\n"<<b<<"\n"<<c<<endl;
    }
    else
    {
         cout<<a<<"\n"<<c<<"\n"<<b<<endl;
    }
    
    }

    else  if(b<=a && b<=c){
    if(a<=c){
        cout<<b<<"\n"<<a<<"\n"<<c<<endl;
    }
    else
    {
         cout<<b<<"\n"<<c<<"\n"<<a<<endl;
    }
    
    }


    else  if(c<=a && c<=b){
    if(b<=a){
        cout<<c<<"\n"<<b<<"\n"<<a<<endl;
    }
    else
    {
         cout<<c<<"\n"<<a<<"\n"<<b<<endl;
    }
    
    }
    cout<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
   
    return 0;
}
