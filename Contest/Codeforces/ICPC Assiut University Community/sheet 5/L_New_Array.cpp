#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
const int s=100000;
void Print(int arr[s],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int32_t main()
{
    faster;
    int n;
    cin>>n;
    int arr_1[s];
    int arr_2[s];
    for(int i=0;i<n;i++){
        cin>>arr_1[i];
    }
     for(int i=0;i<n;i++){
        cin>>arr_2[i];
    }
    Print(arr_2,n);
    Print(arr_1,n);
   
    return 0;
}