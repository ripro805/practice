#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   string s;
   cin>>s;
   string trgt="hello";
   int j=0;
   for(int i=0;i<s.length();i++){
    if(s[i]==trgt[j]){
        j++;
        if(j==trgt.length()){
            cout<<"YES"<<nl;
            return 0;
        }
    }
   }
   cout<<"NO"<<nl;
    return 0;
}