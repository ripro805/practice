#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int l=0,r=0;
    vector<int>res;
    while(l<n && r<m){
        if(a[l]<=b[r]){
            res.push_back(a[l]);
            l++;
        }
        else
        {
            res.push_back(b[r]);
            r++;
        }
    }
    while(l<n){
        res.push_back(a[l]);
        l++;
    }
    while(r<m){
        res.push_back(b[r]);
        r++;
    }

    for(auto num:res){
        cout<<num<<" ";
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