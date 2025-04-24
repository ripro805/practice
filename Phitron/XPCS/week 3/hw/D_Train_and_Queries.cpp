#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n, q;
    cin >> n >> q;
    map<int, set<int>> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x].insert(i);
    }
    for(int i=1;i<=q;i++){
        int l,r;
        cin>>l>>r;
        if((mp.find(l)==mp.end())|| (mp.find(r)==mp.end())){
            cout<<"NO"<<nl;
        }
        else{
            int strt_in,end_in;
            strt_in=*mp[l].begin();
            end_in=*mp[r].rbegin();
            if(strt_in<end_in) cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
    }
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}