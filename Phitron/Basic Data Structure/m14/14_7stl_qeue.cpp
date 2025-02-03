#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int32_t main()
{
    faster;
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }

    
    if (!q.empty()) {
        cout << q.front() << " " << q.back() << " " << q.size() << nl;
    }
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout <<nl;

    return 0;
}