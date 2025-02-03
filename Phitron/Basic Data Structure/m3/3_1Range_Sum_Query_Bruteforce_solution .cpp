#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n,q;
    cin>>n>>q;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        int sum=0;
        for(int i=l;i<=r;i++){
            sum+=v[i];
        }
        cout<<sum<<nl;
    }

    return 0;
}