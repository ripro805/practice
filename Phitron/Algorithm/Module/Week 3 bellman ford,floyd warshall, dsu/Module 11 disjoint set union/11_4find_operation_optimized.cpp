#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int par [1005];
int find(int node){
    if (par[node]==-1) return node;
    int leader=find(par[node]);
    par[node]=leader;
    return leader;
}
int32_t main()
{
    faster;
    memset(par,-1,sizeof(par));
    par[0]=1;
    par[1]=-1;
    par[2]=1;
    par[3]=1;
    par[4]=5;
    par[5]=3;

    cout<<find(4)<<nl;
    return 0;
}