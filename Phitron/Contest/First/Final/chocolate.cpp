#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
ll count_choco(ll choco, ll wrap){
    if(wrap<3) return choco;
    ll new_choco= wrap/3;
    ll remain=wrap%3;

    return count_choco(choco+new_choco, new_choco+remain);
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
   while(t--){
    ll n;
    cin>>n;
    ll c=n/5;

    ll total_c=count_choco(c,c);
    cout<<total_c<<nl;
    

   }
    return 0;
}