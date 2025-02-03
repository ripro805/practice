#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void shiftZero(vector<int>& arr,int n)
{
    int indx=0;
    for(int i=0;i<n;i++){
       if(arr[i]!=0){
         arr[indx++]=arr[i];
       }
    }
    while(indx<n){
        arr[indx++]=0;
    }
}
int32_t main()
{
    faster;
   int n;
   cin>>n;
   vector<int>arr(n);
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];
   }

   shiftZero(arr,n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<nl;
   
    return 0;
}