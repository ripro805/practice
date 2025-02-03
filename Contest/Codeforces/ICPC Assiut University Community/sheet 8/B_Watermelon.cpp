#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int w;
    cin>>w;
    if(w<=2) {
         cout<<"NO"<<nl;
        return 0;
    }
    if(w%2==0){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }
    return 0;
}