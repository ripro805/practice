#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
bool canReach(int st,int tar){
    if(st==tar)
      return true;
    if(st>tar)
      return false;  
    int l=canReach(st+5,tar);
    int r=canReach(st*4,tar);
    return l||r;
}
int32_t main()
{
    faster;
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    if (canReach(1,n))
        cout<<"YES"<<nl;
    else 
        cout<<"NO"<<nl;
    }
    return 0;
}