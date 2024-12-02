#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
bool lucky_digit(int digit){
    return digit==4 || digit==7;
}
bool is_lucky(int n){
    while(n>0){
        int last_digit=n%10;
        if(!lucky_digit(last_digit)){
            return false;
        }
            n/=10;
        
       
    }
     return true;
}
int32_t main()
{
    int a,b;
    cin>>a>>b;
    int  flag=0;
    for(int i=a;i<=b;i++){
        if(is_lucky(i)){
            cout<<i<<" ";
            flag=1;
        }
        
    }
    if(!flag){
        cout<<-1<<endl;
    }
    
    return 0;
}