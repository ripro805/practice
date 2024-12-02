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
    int flag=1;
   
        if(n<=1){
            flag=0;
        }
        else{
            for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                flag=0;
                break;
            }
        }
        }
    
    if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    return 0;
}