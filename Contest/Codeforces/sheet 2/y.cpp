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
    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    int first=0,second=1;
    cout<<first<<" "<<second<<" ";
    for(int i=2;i<n;i++){
        int fib=first+second;
       cout<<fib<<" ";
       first=second;
       second=fib;
       
    }
    cout<<endl;
    
    return 0;
}
