#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   int n,k;
   cin>>n>>k;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end(),greater<int>());
  
   ll max_sum=0;
   for(int i=0;i<k;i++){
    if(arr[i] < 0){
			break;
		}
    max_sum+=arr[i];
   }
   cout<<max_sum<<nl;
    return 0;
}