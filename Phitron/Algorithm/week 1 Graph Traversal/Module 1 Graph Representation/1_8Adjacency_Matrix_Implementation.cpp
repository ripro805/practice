#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n,e;
    cin>>n>>e;
    int adj_mat[n][n];
    // for(int i=0;i<n;i++){  // for initializing all as zero;
    //     for(int j=0;j<n;j++){
    //         adj_mat[i][j]=0;
    //     }
    // }

    memset(adj_mat,0,sizeof(adj_mat)); // shortcut
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) adj_mat[i][j]=1;
        }
    }
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        adj_mat[a][b]=1;
        adj_mat[b][a]=1; //undirect incase of direct ignore it
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<nl;
    }
    return 0;
}