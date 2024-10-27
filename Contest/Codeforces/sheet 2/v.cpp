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
    faster;
    int n;
    cin>>n;
    int curr=1;
    for(int i=0;i<=n;i++){
       
            cout<<curr<<" "<<curr+1<<" "<<curr+2<<" "<<"PUM"<<endl;
        curr+=4;
    }
    return 0;
}
