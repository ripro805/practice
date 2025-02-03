#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sorted=1;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            sorted=0;
            break;
        }
    }
    if(sorted){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }
  }
    return 0;
}