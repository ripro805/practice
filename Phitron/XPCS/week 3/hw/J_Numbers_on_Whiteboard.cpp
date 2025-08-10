#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n;
    cin>>n;
    cout<<2<<nl;
    int a=n,b=n-1;
 for(int i=1;i<n;i++){
    cout<<a<<" "<<b<<nl;
    a=(a+b+1)/2;
    b--;
 }
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