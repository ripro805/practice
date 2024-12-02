#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    string s;
    cin>>s;
    
    string z=s;
    reverse(z.begin(),z.end());
     if(s==z){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}