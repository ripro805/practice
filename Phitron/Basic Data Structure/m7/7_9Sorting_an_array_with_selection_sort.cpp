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
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];

   }
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

   }
   cout<<nl;
    return 0;
}