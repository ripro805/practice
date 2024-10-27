#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
}
int32_t main()
{
    faster;
    string s;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
       if(s[i]==','){
        cout<<" ";
       }
      else if(s[i]>='a'&&s[i]<='z'){
        cout<<char(s[i]-32);
       }
       else if(s[i]>='A'&&s[i]<='Z'){
        cout<<char(s[i]+32);
       }
       
    }
    cout<<endl;
    return 0;
}