#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n,tens,ones;
    cin>>n;
    ones=n%10;
    tens=n/10;
    tens=tens%10;
    if(ones==0 || tens==0){
        cout<<"YES"<<endl;
    }
    else if(ones%tens==0 || tens%ones==0){
        cout<<"YES"<<endl;
    }
    else{
         cout<<"NO"<<endl;
    }

    return 0;
}
