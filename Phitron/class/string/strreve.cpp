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
   string s;
   getline(cin,s);
   for(int i=0,j=s.size()-1;i<=j;i++,j--){
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
   }

   cout<<s<<endl;
  
    return 0;
} 