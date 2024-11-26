#include <bits/stdc++.h>
#include<cmath>
using namespace std;
typedef long long ll;
#define nl "\n"

int main ()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<abs(sum)<<endl;
}
