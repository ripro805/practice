#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    else{
            for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
                break;

                
            }
           
        }
         return true;
        }
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
   while(t--){
    int x;
    cin>>x;
    if(isPrime(x)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
    return 0;
}