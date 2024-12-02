#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int fibonacci(int n){
    if(n==1) return 0;
    if(n==2) return 1;

    return fibonacci(n-1)+fibonacci(n-2);
}

int32_t main()
{
    faster;
   int n;
   cin>>n;
   int fib=fibonacci(n);
   cout<<fib<<endl;
    return 0;
}