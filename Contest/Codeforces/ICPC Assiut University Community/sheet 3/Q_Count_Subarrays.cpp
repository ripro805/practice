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
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    ll total=0;
 
    for(int i=0;i<n;++i){
         ll cnt=1;
        for(int j=i+1;j<n;++j){
          if(arr[j]>=arr[j-1]){
            cnt++;
          }
          else{
            break;
          }
         
        }
         total+=cnt;
    }
    cout<<total<<nl;
   
   }
    return 0;
}