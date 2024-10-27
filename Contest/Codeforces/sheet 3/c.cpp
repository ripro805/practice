#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
   long long n;
   cin>>n;
   long long a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<n;i++){
    if(a[i]>0){
        a[i]=1;
    }
    else if(a[i]<0){
        a[i]=2;
    }
   }

   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }

    return 0;
}
