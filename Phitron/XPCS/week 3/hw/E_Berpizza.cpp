#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n,cus_no=1;
    cin>>n;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ml;
    vector<int>ans;
    for(int i=1;i<=n;i++){
        int type;
        cin>>type;
        if(type==1){
            int money;
            cin>>money;
            s.insert({cus_no,money});
            ml.insert({money,-cus_no});
            cus_no++;
        }
        else if(type==2){
            int pos=s.begin()->first,money=s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});

        }
        else{
            int pos=-ml.rbegin()->second,money=ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
        }
    }
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<nl;

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