#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            cout<<string(m,'#')<<nl;
        }
        else if(i%4==2){
            cout<<string(m-1,'.')+"#"<<nl;
        }
        else{
            cout<<"#"+string(m-1,'.')<<nl;
        }
    }
    return 0;
}
