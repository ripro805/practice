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
   ll sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
      if(arr[i]%2!=0){
        mini=min(mini,arr[i]);
      
      }
     
      
    }
    if(sum%2!=0)
    {
      sum-=mini;
    }
      cout<<sum<<nl;

    return 0;
}