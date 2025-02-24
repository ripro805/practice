#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int n;
bool is_lucky( int n){
while(n>0){
    int digit=n%10;
if(digit!= 4 && digit !=7) return false;
n/=10;
}

    return true;
}

int32_t main()
{
    faster;
    cin>>n;
    if( is_lucky(n)){
        cout<<"YES"<<nl;
        return 0;
    }
    vector<int>lucky={4,7,44,47,74,77,444,474,447,747,774,777};
    for(auto l:lucky){
        if(n%l==0){
            cout<<"YES"<<nl;
           return 0;
        }
    }
    cout<<"NO"<<nl;
    return 0;
}