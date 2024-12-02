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
   int count[26]={0};
  for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }
   for(int i=0;i<26;i++){
    if(count[i]>0){
        cout<<char( i+'a')<<" : "<<count[i]<<endl;
    }
   }
    return 0;
}
