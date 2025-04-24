#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int l,r,d,u;
        cin>>l>>r>>d>>u;
        if(l==r&&l==d&&l==u){
            cout<<"Yes"<<nl;
        }
        else{
            cout<<"No"<<nl;
        }
    }
    return 0;
}