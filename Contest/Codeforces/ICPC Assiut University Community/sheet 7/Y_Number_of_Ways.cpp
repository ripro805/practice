#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int s,e;
int way(int num){
    if(num>=e){
        return num==e;
    }
    
        return way(num+1)+way(num+2)+way(num+3);
    
}
int32_t main()
{
    faster;
   cin>>s>>e;
   int res=way(s);
   cout<<res<<endl;
    return 0;
}