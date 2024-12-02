#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int* get_array(int n){
   int* array=new int[n];
   for(int i=0;i<n;i++){
    cin>>array[i];
   }
   return array;
}
int32_t main()
{
    faster;
   int n;
   cin>>n;
   int* dynamicarray=get_array(n);
   for(int i=0;i<n;i++){
    cout<<dynamicarray[i]<<" ";
   }
   cout<<nl;
   delete[] dynamicarray;
    return 0;
}