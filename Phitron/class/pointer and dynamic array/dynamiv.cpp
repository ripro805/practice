#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
}
int32_t main()
{
    int *arr= (int *)malloc(5 * sizeof(int));
    for(int i=0;i<5;i++){
        arr[i]=i+1;
    }

    for(int i=0;i<5;i++){
      cout<<arr[i]<<endl;
    }
    cout<<endl;
     int *temp=arr;
     arr= (int *)realloc(arr,10  * sizeof(int));
     if(arr==NULL){
        arr=temp;
     }
     else{
        cout<<"Error"<<endl;
     }
      for(int i=5;i<10;i++){
        arr[i]=100;
    }

    for(int i=0;i<10;i++){
      cout<<arr[i]<<endl;
    }

    free(arr); 

    return 0;
}