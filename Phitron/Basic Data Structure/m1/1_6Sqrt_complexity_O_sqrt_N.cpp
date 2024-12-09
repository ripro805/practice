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
    for(int i=1; i<=sqrt(t); i++)          //   O(sqrt(n))
       
       {
        cout<<i<<endl;
       }
    return 0;                        //   O(1)
}
//here we get final complexity  O(sqrt(n))