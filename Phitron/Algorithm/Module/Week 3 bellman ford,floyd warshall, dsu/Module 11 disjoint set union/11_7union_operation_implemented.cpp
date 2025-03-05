#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int par [1005];
int group_size[1005];
int find(int node){
    if (par[node]==-1) return node;
    int leader=find(par[node]);
    par[node]=leader;
    return leader;
}
void dsu_union(int node1,int node2){
    int led1=find(node1);
    int led2=find(node2);

    if(group_size[led1]>=group_size[led2]){
        par[led2]=led1;
        group_size[led1]+=group_size[led2];
    }
    else{
        par[led1]=led2;
        group_size[led2]+=group_size[led1];
    }
     
}
int32_t main()
{
    faster;
    memset(par,-1,sizeof(par));
    memset(group_size,1,sizeof(group_size));
    dsu_union(1,2);
    dsu_union(2,0);
    dsu_union(3,1);
   

    for(int i=0;i<6;i++){
        cout<<i<<" "<<par[i]<<nl;
    }
    return 0;
}