#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j && i==n/2){
            cout<<"X";
        }
        else if(i==j){
            cout<<"\\";
        }
        else if (j==n-i-1){
            cout<<"/";
        }
        else{
            cout<<"*";
        }
    }
    cout<<nl;
   }
    return 0;
}