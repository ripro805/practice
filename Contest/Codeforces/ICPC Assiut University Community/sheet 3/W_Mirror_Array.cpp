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
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){
            swap(arr[i][j],arr[i][m-j-1]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<nl;
    }
    return 0;
}