#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int max_path(int i, int j, int n, int m, int arr[10][10]){
    if(i==n-1 && j==m-1){
        return arr[i][j];
        
   }

   if(i>=n ||j>=m){
            return INT_MIN;
        }
        int max_down=max_path(i+1,j,n,m,arr);
        int max_right=max_path(i,j+1,n,m,arr);

        return arr[i][j]+max(max_right, max_down);


}
int32_t main()
{
    faster;
    int n ,m;
    cin>>n>>m;
    int arr [10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int res=max_path(0,0,n,m,arr);
    cout<<res<<endl;
    
    return 0;
}