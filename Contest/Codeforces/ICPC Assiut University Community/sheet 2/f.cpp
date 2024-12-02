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
    int mul=1;
    for(int i=1;i<=12;i++){
      mul=n*i;
      cout<<n<<" * "<<i<<" = "<<mul<<endl;
    }
    
    return 0;
}
