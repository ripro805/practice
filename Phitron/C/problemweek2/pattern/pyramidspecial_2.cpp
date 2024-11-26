#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

int main(){

    int n,r,c;
    cin>>n;
    for(r=1;r<=n;r++){
        for(c=1;c<=n-r;c++){
            cout<<" ";
        }
        for(c=1;c<=r;c++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
