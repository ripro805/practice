#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
long long array_sum(long long arr[],int n,int m){
    if(m==0){
        return 0;
    }
    return arr[n-1]+array_sum(arr,n-1,m-1);
}
int32_t main()
{
    faster;
    // int t;
    // cin >> t;
    // for(int i=1; i<=t; i++)
    //     solve(i);
    int n,m;
    cin>>n>>m;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum=array_sum(arr,n,m);
    cout<<sum<<endl;
    return 0;
}