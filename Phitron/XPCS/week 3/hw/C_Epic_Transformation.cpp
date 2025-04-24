#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{ 
    int n;
    cin>>n;
    map<int,int>cnt;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        cnt[x]++;
    }
    priority_queue<int>pq;
    for(auto [x,y]:cnt){
        pq.push(y);
    }
    while(!pq.empty()){
        if(pq.size()<2) break;
        int x,y;
        x=pq.top();
        pq.pop();
        y=pq.top();
        pq.pop();
        x--,y--;
        if(x>=1) pq.push(x);
        if(y>=1) pq.push(y);

    }
    int ans=0;
    while(!pq.empty()){
        ans+=pq.top();
        pq.pop();
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