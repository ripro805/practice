#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void matrixTolist(int mat [][100],int n){
    vector<int>adj_list[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==1){
                adj_list[i].push_back(j);
            }
        }
    }
    int matrix [n] [n];
    memset(matrix,0,sizeof(matrix));
    for(int i=0;i<n;i++){
        
        for(auto val: adj_list[i]) {
           matrix[i][val]=1;
        }
    
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<nl;
    }

}
int32_t main()
{
    faster;
    int n;
    cin>>n;
    int mat [100] [100];
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    matrixTolist(mat,n);
    return 0;
}