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
    long n;
    cin>>n;
    for(int i=2;i<=n;i++){
        
        for(int j=2;j*j<=n;j++){
            if(i%j==0&&i%1==0 &&i%i==0){
            cout<<i<<" ";
        }
        }
    }
    return 0;
}
