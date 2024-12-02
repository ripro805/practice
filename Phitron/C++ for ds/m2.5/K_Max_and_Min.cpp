#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{

    long long a,b,c;
    cin>>a>>b>>c;
    long long max,min;
    
    if(a<=b && a<=c ){
       min=a;
    }
    else if(b<=a&& b<=c){
      min=b;
    }
    else {
       min=c;
    }
    
    if(a<=b && a<=c ){
       min=a;
    }
    else if(b<=a&& b<=c){
      min=b;
    }
    else {
       min=c;
    }
    if(a>=b && a>=c ){
        max=a;
    }
    else if(b>=a&& b>=c){
       max=b;
    }
    else {
       max=c;
    }
 
    
 
    cout<<min<<" "<<max<<endl;
}
   