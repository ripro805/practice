#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
     pair<string,int>p;
     p={"hello",69};
     cout<<p.first<<endl;
     cout<<p.second<<endl;

     cout<<nl;
    int n;
    cin>>n;

    vector<pair<int,int>>x(n);
    for(int i=0;i<n;i++){
        cin>>x[i].first>>x[i].second;
    }
    for(int i=0;i<n;i++){
        cout<<x[i].first<<" "<<x[i].second<<nl;
    }
    return 0;
}