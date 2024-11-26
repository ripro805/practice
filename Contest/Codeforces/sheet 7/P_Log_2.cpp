#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int Log(int n){
    if(n==1){
        return 0;
    }
    return 1+Log(n/2);
}
int32_t main()
{
    faster;
    long long n;
    cin>>n;
    long long res=Log(n);
    cout<<res<<endl;
    return 0;
}