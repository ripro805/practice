#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>d;
    ll tot=0;
    ll min_chng=0;
    for(int i=0;i<n;i++){
        ll L=i;
        ll R=n-i-1;
        if(s[i]=='L'){
            if(R>L){
                min_chng++;
                tot+=R;
                d.push_back(R-L);

            }
            else{
                tot+=L;
            }
        }
        else{
            if(L>R){
                min_chng++;
                
                d.push_back(L-R);
                tot+=L;

            }
            else{
                tot+=R;
            }
    }
}
   vector<ll>ans(n+1);
   for(int i= min_chng;i<=n;i++){
     ans[i]=tot;
   }
   sort(d.rbegin(),d.rend());
   for(int i=min_chng-1;i>=1;i--){
    tot-=d.back();
    d.pop_back();
    ans[i]=tot;
       
   }
     
   for(int i =1;i<=n;i++){
    cout<<ans[i]<<" ";
   }
   cout<<nl;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}