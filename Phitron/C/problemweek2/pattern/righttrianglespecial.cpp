#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int main(){
    int n ,r,c;
    cin>>n;
    for(r=1;r<=n;r++){
       for(c=1;c<=r;c++){
         cout<<"*"<<" ";
        //cout<<char(r+64)<<" ";
        
       }
       cout<<endl;
    }
}
