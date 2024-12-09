#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t,s;
    cin >> t>>s;
    for(int i=1; i<=t; i++)//O(n)
       {
        for(int j=1;j<s;j*=2){ //O(logn)
            cout<<"Hello"<<endl;
       }
       }
    return 0;
}
//here we get final complexity O(nlogn)....for nested loop time complexitty will be multiplied..
//when one of them is increament or decreament and another one will divide or multiplied..