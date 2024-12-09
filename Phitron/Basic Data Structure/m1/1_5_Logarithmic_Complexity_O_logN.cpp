#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;                             // O(1)
    cin >> t;                         //  O(1)
    for(int i=1; i<=t; i*=2)          // O(log)
       
       {
        cout<<i<<endl;
       }
    return 0;                        //   O(1)
}


/*
for this code we input 1000
but the ouput line is 10
it means  here the number oof operation is less

the ouput is 1 2 4 8 16 32 64 128 256 512

it means 2^0 2^1 2^2.................2^9
in general let 2^k=1000
               klog2_2=log2_1000
               k=log2_10000

               number of operation=log2_1000
                                  =log_1000[we skip the constant]
                                  =logn[n=1000]

*/

//when the increament will be multiplication and division it will be logarithomic complexity