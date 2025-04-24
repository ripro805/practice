#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    ll n;
    cin>>n;
    ll a=n,b=n-1,c=n-2;
    if(2*a<(a+b+c)) cout<<a+b+c<<nl;
    else cout<<-1<<nl;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solve(i);
    return 0;
}