#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin>>n;
    multiset<int>ml;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ml.insert(x);

    }
    int cnt=0,prb=1;
    while(!ml.empty()){
        auto LB=ml.lower_bound(prb);
       if(LB!=ml.end()){
        cnt++;
        ml.erase(LB);
       }
       else{
        break;
       }
       prb++;
    }
    cout<<cnt<<nl;

}
int32_t main()
{
    faster;
    // int t;
    // cin >> t;
    // for(int i=1; i<=t; i++)
        solve();
    return 0;
}