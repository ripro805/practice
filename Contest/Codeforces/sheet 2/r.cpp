#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
   faster;
 
   while(true){
    int n,m;
   cin>>n>>m;
    if(n<=0||m<=0){
    break;
   }
   int start=min(n,m);
   int end=max(n,m);
   int sum=0;
   
    for(int i=start;i<=end;i++){
      cout<< i<<" ";
         sum+=i;
    
    
   }
   cout<<"sum ="<<sum<<endl;
   }
    return 0;
}
