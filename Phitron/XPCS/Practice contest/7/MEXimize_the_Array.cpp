#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
   ll op =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=i){
            op += abs(arr[i]-i);
        }
    }
 
 
    cout<<op<<endl;
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