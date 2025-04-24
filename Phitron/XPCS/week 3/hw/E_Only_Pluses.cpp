#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i =0;i<5;i++){
        if(a<=b && a<=c) a++;
        else if(b<=a && b<=c) b++;
        else c++;
    }
    cout<<a*b*c<<nl;
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