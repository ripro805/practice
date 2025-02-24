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
   
    vector <pair<int,int>>edge_list;
    while(e--){
        int a,b;
        cin>>a>>b;
        edge_list.push_back({a,b});
      
    }

    for(auto p: edge_list){
        cout<<p.first<<" "<<p.second<<nl;
    }



    return 0;
}