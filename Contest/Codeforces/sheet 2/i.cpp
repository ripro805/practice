#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    long long n,original,reversed=0;
    cin>>n;
    original=n;
    while(n>0){
        long long last=n%10;
        reversed=reversed*10+last;
        n/=10;

    }
    cout<<reversed<<endl;

    if(original==reversed){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    


    return 0;
}
