#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
}
int32_t main()
{
    faster;
   int n;
   cin>>n;
//    int m=sqrt(n);
   
   
   for(int i=2;i<=n;i++){
        int flag =1;
        for(int j=2;j<=sqrt(i); j++){
            if(i%j==0){
                flag=0;
                //cout<<i<<endl;10
                break;
            }
        }
        if(flag){
                cout<<i<<" ";
            }
   
    
   }
   cout<<endl;
   
    return 0;
}