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
  vector<long long int>v(n),pref(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  pref[0]=v[0];
  for (int i = 1; i < n; i++)
  {
    pref[i]=pref[i-1]+v[i];
  }
  for(int i=n-1;i>=0;i--){
    cout<<pref[i]<<" ";
  }
  cout<<nl;
    return 0;
}