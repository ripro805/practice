#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
}
int32_t main()
{
   int n,m;
   cin>>n>>m;
   int a[n+5][m+5];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
   }
   //for changing value
   a[0][3]=10;
   a[1][4]=110;
   a[2][2]=160;

   cout <<endl;

   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
}