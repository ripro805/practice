#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin>>t;
    while(t--){
    int n,res=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val=arr[0];
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            res=(arr[i-1]+arr[j-1])+(j-i);
            val=min(val,res);
        }
    }
    cout<<val<<endl;
    }
    return 0;
}