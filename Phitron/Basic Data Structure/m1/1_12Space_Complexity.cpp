/*
space complexity is the taking space in the memeory respect to input...
space complexity change respect to array...
*/

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
    for(int i=1; i<=t; i++)          // time   O(n) space O(1)
       
       {
        cout<<i<<endl;
       }


      int n; // O(1)
      cin>>n;// O(1)
      int arr[n];// O(n)
      for(int i=0;i<n;i++){ // O(1)
        cin>>arr[i];
      } 
      for(int i=0;i<n;i++){  // O(1)
        cout<<arr[i];
      } 
    return 0;                        //   O(1)
}
/*
when we take 2d array it will be O(n*n)
*/