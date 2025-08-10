#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int a,b,n;
    cin>>a>>b>>n;
    vector<int>tool(n);
    for(int i=0;i<n;i++){
        cin>>tool[i];
    }
    ll tol=b;
    for(int i=0;i<n;i++){
       
        tol+=min(1LL+tool[i],a*1LL)-1;
       
    }
    
    cout<<tol<<nl;
    
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