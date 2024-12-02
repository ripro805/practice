#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n;
    cin>>n;
    int r,c;
    for(r=n;r>=1;r--){
        for(c=1;c<=r;c++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
