#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    ll n,w;
    cin>>n>>w;
    multiset<ll>ml;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ml.insert(x);
    }
    int h=1,left=w;
    while(!ml.empty()){
        auto it=ml.upper_bound(left);
        if(it==ml.begin()){
            left=w;
            h++;

        }
        else{
            it--;
            int val=*it;
            left-=val;
            ml.erase(it);
        }
    }
    cout<<h<<nl;

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