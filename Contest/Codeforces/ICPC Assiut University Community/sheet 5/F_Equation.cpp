#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
long long  power(int x,int n){
   long long res=1;
    for(int i=0;i<n;i++){
        res*=x;

    }
    return res;
}
long long Sum(int x,int n){
    long long sum=-1;
    for (int i = 0; i <=n; i+=2)
    {
       sum+=power(x,i);
    }

    return sum;
    
}

int32_t main()
{
    faster;
    int x,n;
    cin >> x>>n;
    long long resu=Sum(x,n);
    cout<<resu<<endl;
    return 0;
}