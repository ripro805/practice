#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n;
    cin >> n;
    vector<ll>a(n);for(ll i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    ll clc=a[0],pre=a[0];
    ll x=0;
    for(ll i=1;i<n;i++){
      ll p=max(x,pre-1);
      clc+=min(p,a[i]),pre=min(p,a[i]);
      //cout<<clc<<endl;
    }
    cout<<clc<<endl;



    return 0;
}