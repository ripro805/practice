#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void Print(int n){
for(int i=1;i<=n;i++){
   if(i!=1){
    cout<<" ";
   }
    cout<<i;
}

}
int32_t main()
{
    faster;
    int x;
    cin>>x;
    Print(x);
    cout<<nl;
    return 0;
}