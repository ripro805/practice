#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=0;
    priority_queue<ll>pq;
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            if(pq.empty()) continue;
            ans+=pq.top();
            pq.pop();
        }
        else{
            pq.push(arr[i]);
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