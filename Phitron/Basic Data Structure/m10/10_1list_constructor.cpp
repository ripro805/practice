#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   list<int>l;
   list<int>l1(3);//size
   list<int>l2(10,3);//size,element
   list<int>l3={1,2,3,4,5};
   list<int>l4(l3); //using another list...it also done by array and vector

   for(auto it=l2.begin();it!=l2.end();it++){  // list can't be print usually..it shoukd be print withh iterator..
    cout<<*it<<endl;
   }

   for(int val: l4){
    cout<<val<<" ";
   }
    return 0;
}