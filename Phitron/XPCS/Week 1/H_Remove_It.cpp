#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);


int32_t main()
{
    faster;
  int n,x;
  cin>>n>>x;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    if(arr[i]==x){
        continue;
    }
    cout<<arr[i]<<" ";
  }
  cout<<nl;
    return 0;
}