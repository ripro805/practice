#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   vector<int>v={1,2,3,4,5,6};
   cout<<v[3]<<endl;//Access the ith element.O(1)


   cout<<v.at(2)<<endl;//Access the ith element.O(1)


   cout<<v.back()<<endl;//Access the last element.O(1)


   cout<<v.front()<<endl;//Access the first element.O(1)




    return 0;
}