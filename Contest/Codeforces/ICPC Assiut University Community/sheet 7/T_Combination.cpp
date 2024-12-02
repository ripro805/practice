#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
long long nCr(long long n,long long r ){
    long long res=1;
    long long temp=2;
    for(int i=r+1;i<=n;i++){
        res*=i;
        if(temp<=n-r && res%temp==0){
            res/=temp;
            temp++;
        }
    }
    return res;
}

int32_t main()
{
    faster;
   int n,r;
   cin>>n>>r;
  if(r>n){
    cout<<0<<endl;
  }
  else{
    cout<<nCr(n,r)<<endl;
  }
    return 0;
}