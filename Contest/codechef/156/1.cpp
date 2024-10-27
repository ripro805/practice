#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    int x,n;
    cin>>x>>n;
    int laddu=10*n;
    int remain_taka=x- laddu;
    int jalebi= remain_taka/20;
    cout<<jalebi<<endl;
    return 0;
}
