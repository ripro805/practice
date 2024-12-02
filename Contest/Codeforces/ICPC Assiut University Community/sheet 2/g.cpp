#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long fact=1;
        
            for(int i=1;i<=n;i++){
            fact*=i;
        }
            cout<<fact<<endl;
        }
        
        
    
    return 0;
}
