#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
  int q;
  cin>>q;
  while(q--){
    ll l,r;
    cin>>l>>r;
    if(l>r){
        swap(l,r);
    }

    ll sumL=(l*(l-1))/2;
    ll sumR=(r*(r+1))/2;

    cout<<(sumR-sumL)<<nl;
  }
    return 0;
}