#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int countNumber(vector<int>& arr,int n){
int cnt=1;
for(int i=1;i<n;i++){
   if(arr[i]!=arr[i-1]){
    cnt++;
   }
}
return cnt;
}
int32_t main()
{
    faster;
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
        if(n==0)
        {
            cout<<0;
        return 0;
        }

    sort(arr.begin(),arr.end());
    
cout<<countNumber(arr,n)<<nl;
    
    return 0;
}