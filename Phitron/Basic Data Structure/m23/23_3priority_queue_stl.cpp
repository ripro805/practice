#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    priority_queue<int>p;//for max priority
    p.push(10);
    p.push(5);
    p.push(30);

    cout<<p.top()<<nl;
    p.push(100);
    cout<<p.top()<<nl;


    priority_queue<int,vector<int>,greater<int>>pq;//for min priority
    pq.push(10);
    pq.push(5);
    pq.push(30);

    cout<<pq.top()<<nl;
    pq.push(100);
    cout<<pq.top()<<nl;
    return 0;
}