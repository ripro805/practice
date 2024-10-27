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
    long long n,k,a;
    cin>>n>>k>>a;
    long long res=(n*k)/a;

    if(res<=INT_MAX &&res>=INT_MIN){
        cout<<"int"<<endl;
    }
     else if(res<=LLONG_MAX &&res>=LLONG_MIN){
        cout<<"long long"<<endl;
    }
    else{
        cout<<"double"<<endl;
    }
    return 0;
}
