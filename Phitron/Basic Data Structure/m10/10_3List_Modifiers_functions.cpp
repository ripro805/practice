//see in doc
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;

   list<int>l3={1,2,3,4,5};
   list<int>l4(l3); //using another list...it also done by array and vector
l4.erase(next(l4.begin(),2),next(l4.begin(),5));
   
   for(int val: l4){
    cout<<val<<" ";
   }
    return 0;
}

// prac in doc file