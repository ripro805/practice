#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;

  int *arr=new int [3];
   *(arr)=10;
   *(arr+1)=20;
   *(arr+2)=30;
   *(arr+3)=40;
   *(arr+4)=50;
   for(int i=0;i<5;i++){
    cout<<*(arr+i)<<endl;
   }
   cout<<nl;

    int arr1[5];
   for(int i=0;i<5;i++){
    arr1[i]=arr[i];
}
  
   delete[] arr;

 arr1[3]=13;
 arr1[4]=15;

for(int i=0;i<5;i++){
 cout<<arr1[i]<<endl;
}
delete[] arr1;
  
    return 0;
}