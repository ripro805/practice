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
   for(int i=0;s[i]!='\0';i++){
    if(s[i]=='E'&& s[i+1]=='G'&&s[i+2]=='Y'&&s[i+3]=='P'&&s[i+4]=='T'){
       i+=4;
        cout<<" ";
    }
    else{
        cout<<s[i];
    }
   }
    return 0;
}