#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n,m,q;
    cin>>n>>m>>q;
    vector<int>t(m);
    for(int i=0;i<m;i++){
        cin>>t[i];
    }
    sort(t.begin(),t.end());
    while(q--){
        int d;
        cin>>d;
        if(d<t[0]){
            cout<<t[0]-1<<nl;
            continue;
        }
        if(d>t[m-1]){
            cout<<n-t[m-1]<<nl;
            continue;
        }
        auto it=lower_bound(t.begin(),t.end(),d);
        auto jt=it;
        jt--;
        int l=*it,r=*jt;
        int mid=(l+r)/2;
        cout<<min(abs(mid-l),abs(mid-r))<<nl;
    }

}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solve(i);
    return 0;
}