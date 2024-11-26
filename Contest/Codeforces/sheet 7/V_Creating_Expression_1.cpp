#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
long long n,x;
long long arr[21];

bool check(long long sum,long indx){
    if(indx==n){
        return sum==x;
    }
    bool route1=check(sum+arr[indx],indx+1);
    bool route2=check(sum-arr[indx],indx+1);
    return route1||route2;
}
int32_t main()
{
    faster;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(check(arr[0],1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}