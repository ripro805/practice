#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int a,b,c;
    cin>>a>>b>>c;
    int t1=abs(a-1);
    int t2=abs(b-c)+abs(c-1);
    if(t1<t2)cout<<"1"<<nl;
    else if(t2<t1) cout<<"2"<<nl;
    else cout<<"3"<<nl;
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