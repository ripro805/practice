#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    vector<int>arr2(m);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

     for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    int j=0;

    int cnt=0;
      for (int i = 0; i < n; i++)
    {
      if(arr[i]==arr2[j])
      {
        ++j;
      }
    }
    if(j==m){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }
    
    return 0;
}