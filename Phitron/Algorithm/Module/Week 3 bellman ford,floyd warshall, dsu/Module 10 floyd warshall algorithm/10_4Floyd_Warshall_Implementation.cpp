#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
}
int32_t main()
{
    faster;
    int n,e;
    cin>>n>>e;
    int adj_mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i==j) adj_mat[i][j]=0; 
          else  adj_mat[i][j]=INT_MAX;
        }
    }
    while(e--){
        int a,b,c;
        cin>>a>>b>>c;
        adj_mat[a][b]=c;
    }

    for(int k=0;k<n;k++){ //for i->k->j
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){ //fori->j
                 if(adj_mat[i][k]!=INT_MAX&& adj_mat[k][j]!=INT_MAX && adj_mat[i][k]+adj_mat[k][j]<adj_mat[i][j])
                   adj_mat[i][j]=adj_mat[i][k]+adj_mat[k][j];
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(adj_mat[i][j]==INT_MAX) cout<<"INF ";
            else cout<<adj_mat[i][j]<<"   ";
            }
            cout<<nl;
    }
    return 0;
}