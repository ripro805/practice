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
    ll n,e,q;
    cin>>n>>e>>q;
    ll adj_mat[n+5][n+5];
    for(int  i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i==j) adj_mat[i][j]=0; 
          else  adj_mat[i][j]=LONG_LONG_MAX;
        }
    }
    while(e--){
        ll a,b,c;
        cin>>a>>b>>c;
        adj_mat[a][b]=min(adj_mat[a][b],c);
        adj_mat[b][a]=min(adj_mat[a][b],c);
    }

    for(int k=1;k<=n;k++){ //for i->k->j
        for(int  i=1;i<=n;i++){
            for(int j=1;j<=n;j++){ //fori->j
                 if(adj_mat[i][k]!=LONG_LONG_MAX&& adj_mat[k][j]!=LONG_LONG_MAX && adj_mat[i][k]+adj_mat[k][j]<adj_mat[i][j])
                   adj_mat[i][j]=adj_mat[i][k]+adj_mat[k][j];
            }
        }
    }


    while(q--){
        int s,d;
        cin>>s>>d;
        if(adj_mat[s][d]==LONG_LONG_MAX) cout<<-1<<nl;
        else cout<<adj_mat[s][d]<<nl;
    }
    return 0;
}