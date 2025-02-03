#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   set<int>s;
   int n;
   cin>>n;
   while(n--){
    int val;
    cin>>val;
    s.insert(val); //logn
   }
   for(auto it =s.begin();it!= s.end();it++){
    cout<<*it<<" ";
   }
   cout<<nl;

   if(s.count(4)){ //logn
    cout<<"Ache"<<nl;
   }
   else{
    cout<<"nai"<<nl;
   }
}