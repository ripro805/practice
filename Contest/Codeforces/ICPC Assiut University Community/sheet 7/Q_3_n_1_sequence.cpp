#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int print_length(int n){
    if(n==1){
        return 1;
    }

    if(n%2==0){
        return 1+print_length(n/2);
    }
    if(n%2==1){
        return 1+print_length(3*n+1);
    }
}
int32_t main()
{
    faster;
    int n;
    cin >> n;
   int res=print_length(n);
   cout<<res<<endl;
    return 0;
}