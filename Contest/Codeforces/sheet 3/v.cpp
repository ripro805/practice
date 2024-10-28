#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n,m;
    cin>>n>>m;
    int arr[n+5];
    int f[100000]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        f[arr[i]]+=1;

    }
    
    for(int i=1;i<=m;i++){
        cout<<f[i]<<endl;
    }

    return 0;
}