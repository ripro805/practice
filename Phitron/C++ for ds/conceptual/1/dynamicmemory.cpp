/* 
stack can clear it's memory itself
heap memory can be controlled by user
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
  int *a=new int;
  *a=10;
  cout<<*a<<endl;

  int *arr=new int [3];
   *(arr)=10;
   *(arr+1)=20;
   *(arr+2)=30;
   *(arr+3)=40;
   *(arr+4)=50;
   for(int i=0;i<5;i++){
    cout<<*(arr+i)<<endl;
   }
  delete a;
  delete[] arr;
    return 0;
}