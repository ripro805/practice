#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   int n;
   cin>>n;
   int arr1[n];
   int arr2[n];
   for (int  i = 0; i < n; i++)
   {
    cin>>arr1[i];
   }
      for (int  i = 0; i < n; i++)
   {
    cin>>arr2[i];
   }
   sort (arr1,arr1+n);
   sort(arr2,arr2+n);
   bool flag =true;
   for (int i = 0; i < n; i++)
   {
    if(arr1[i]!=arr2[i]){
        flag=false;
        break;
    }
   }
   if(flag){
    cout<<"yes"<<nl;
   }
   else{
    cout<<"no"<<nl;
   }
   
    return 0;
}