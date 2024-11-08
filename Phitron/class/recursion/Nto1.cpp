#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void func(int x,int n){
    if(x<1){
        return;
    }
    cout<<x<<endl;
    func(x-1,n);
}
int32_t main()
{
   int n;
   cin>>n;
   func(n,1);
    return 0;
}