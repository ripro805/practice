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
    for(r=1;r<=n;r++){
        for(c=n-r;c>=1;c--){
            cout<<" ";
        }
        for(c=1;c<=2*r-1;c++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
