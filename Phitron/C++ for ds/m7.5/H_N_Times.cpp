#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void characters(int n ,char c){
    for(int i=1;i<=n;i++){
        cout<<c<<" ";
    }
}
int32_t main()
{
    faster;
    int t;
    cin>>t;
    while(t--){

    
    int n;
    char c;
    cin>>n>>c;
    characters(n,c);
    cout<<endl;
    }
    return 0;
}