#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n+1);
    for(int i=0;i<n;i++)
       
    {
        cin>>v[i];
    }
    int gold=0;
    int ans=0;
    for(int i=0;i<n;i++)
       
    {
        if(v[i]>=k){
            gold+=v[i];
        }
        else if(v[i]==0 && gold>0){
            gold--;
            ans++;
        }
    }
    cout<<ans<<nl;
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