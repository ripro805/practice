#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int maxPowerOf2(int x){
    if(x<1) return 0;
    int res=1;
    for(int i=0;i<8*sizeof(int);i++){
        int curr=1<<i;
        if(curr>x) break;
        res=curr;
    }
    return res;
}
void solve()
{
    int n;
    cin>>n;
    int a=maxPowerOf2(n);
    cout<<n-a<<" "<<a<<nl;
}
int32_t main()
{
    faster;
    int tt;
    cin >> tt;
    while(tt--)
        solve();
    return 0;
}