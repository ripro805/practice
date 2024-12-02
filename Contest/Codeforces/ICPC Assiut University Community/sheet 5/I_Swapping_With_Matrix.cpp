#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
const int s=500;
void SwapRow(int mat[s][s],int x,int y,int n){
    for(int i=0;i<n;i++){
        swap(mat[x][i],mat[y][i]);
    }
}
void SwapColumn(int mat[s][s],int x,int y,int n){
    for(int i=0;i<n;i++){
        swap(mat[i][x],mat[i][y]);
    }
}

int32_t main()
{
    faster;
   int n,x,y;
   cin>>n>>x>>y;
   int mat[s][s];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>mat[i][j];
    }
   }
   x--;
   y--;
   SwapRow(mat,x,y,n);
   SwapColumn(mat,x,y,n);
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<nl;
   }
    return 0;
}