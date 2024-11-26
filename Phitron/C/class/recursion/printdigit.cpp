#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void printDigit(int n){
    int digit=n%10;
    if(n==0){
        return;
    }
    printDigit(n/10);
    cout<<digit<<" ";
}
int32_t main()
{
    faster;
   int t;
   cin>>t;
   while (t--){
    int n;
    cin>>n;

    printDigit(n);
    cout<<nl;
   }
    return 0;
}