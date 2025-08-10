#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
        int n;                  cin>>n;
      vector<int> a(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
 
      int x=0;
      for(int i=0;i<n;i++){
         x^=a[i];
      }
      for(int i=0;i<n;i++){
         a[i]^=x;
      }
      int y=0;
      for(int i=0;i<n;i++){
         y^=a[i];
      }
      if(y==0){
         cout<<x<<endl;
      }
      else{
         cout<<-1<<endl;
      }
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