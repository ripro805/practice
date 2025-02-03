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
   vector<int>p(n+5),g(n+5);
   for(int i=1;i<=n;i++){
    cin>>p[i]; //diche kake
   }

   for(int i=1;i<=n;i++){
    g[p[i]]=i; // peyeche kar kach theke
   }

   for(int i=1;i<=n;i++){
   cout<<g[i]<<" ";
   }
   cout<<nl;
    return 0;
}