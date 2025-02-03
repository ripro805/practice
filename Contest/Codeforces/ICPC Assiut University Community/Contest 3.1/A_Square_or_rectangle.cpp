#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int w,h;
        cin>>w>>h;
        if(w==h){
            cout<<"Square"<<nl;
        }
        else{
            cout<<"Rectangle"<<nl;
        }
    }
    return 0;
}