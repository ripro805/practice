#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void func(int x,int n){
    if(x>n){
        return;
    }
    cout<<x<<endl;
    func(x+1,n);
}
int32_t main()
{
   int n;
   cin>>n;
   func(1,n);
    return 0;
}