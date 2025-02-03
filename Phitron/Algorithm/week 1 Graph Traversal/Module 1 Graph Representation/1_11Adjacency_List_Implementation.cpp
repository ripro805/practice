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
    int a[n];
    vector <int>adj_list[n];
    while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
for(int i=0;i<n;i++){
    cout<<i<<"-> ";
    for(auto x: adj_list[i]){
        cout<<x<<" ";
    }
    cout<<nl;
}

    return 0;
}