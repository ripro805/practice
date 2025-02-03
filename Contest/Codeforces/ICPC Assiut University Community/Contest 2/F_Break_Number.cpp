#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n;
    cin>>n;
    ll max_f=0;
    for(int i=1;i<=n;i++){
        ll nums;
        cin>>nums;
        ll count =0;
    while(nums%2==0){
        nums/=2;
        count ++;
    }
    max_f=max(max_f,count);

    }
    cout<<max_f<<nl;
    return 0;
}