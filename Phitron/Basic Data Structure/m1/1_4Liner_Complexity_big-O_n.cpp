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
    for(int i=1; i<=t; i++)          //   O(n)
       
       {
        cout<<i<<endl;
       }
    return 0;                        //   O(1)
}

//here we get final complexity O(n+3) which will be wrong the correct is O(n)
 /*
  if 
   for(int i=1; i<=t-5; i++)          //   O(n)
       
       {
        cout<<i<<endl;
       }
       the  final complexity will be O(n)

       if 
   for(int i=1; i<=t/2; i++)          //   O(n)
       
       {
        cout<<i<<endl;
       }
       the  final complexity will be O(n)


       if 
   for(int i=1; i<=t; i+=2)          //   O(n)
       
       {
        cout<<i<<endl;
       }
       the  final complexity will be O(n)
 */

//when the increament will be addition and substraction it will be linear complexity