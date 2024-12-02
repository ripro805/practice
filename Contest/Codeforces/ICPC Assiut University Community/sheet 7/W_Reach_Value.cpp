#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

bool reach_value(long long n,long long in)
{
    if(in<n) {
        return false;
    }
    else if (in==n) {
        return true;
    }
    else {
        return reach_value(n*10, in) || reach_value(n*20,in);
    }
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
      long long N;
       cin>>N;
       if(reach_value(1,N)){
        cout<<"YES"<<endl;
       } 
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}