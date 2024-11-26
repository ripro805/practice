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
    while (t--){
        long long x,y;
        cin>>x>>y;
        long long start=min(x,y)+1;
        long long end=max(x,y)-1;
        long long sum=0;
        for(int i=start;i<=end;i++){
            if(i%2!=0){
                
               sum+=i; 
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
