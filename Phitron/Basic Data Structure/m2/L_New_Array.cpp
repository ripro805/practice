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
   vector<int>v(n);
   vector<int>u(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   for(int i=0;i<n;i++){
    cin>>u[i];
   }
   for(int i=0;i<n;i++){
    cout<<u[i]<<" ";
   }
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
   cout<<nl;
    return 0;
}