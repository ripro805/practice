#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int get_winner(char a,char b){
    if (a == b) return 0;              
    if ((a == 'R' && b == 'S') || (a == 'S' && b == 'P') || (a == 'P' && b == 'R')) return 1; 
    return -1;     
}
void solve(int t_case)
{
 int n;
 cin>>n;
    string a,b;
    cin>>a>>b;
    int chef=0,chefina=0;
   
   for(int i=0;i<n;i++){
    int res=get_winner(a[i],b[i]);
    if(res==1) chef++;
    else if(res==-1) {
        chefina++;
        
    }
   }
   int ans=0;
  if(chefina>=chef){
    ans=(chef+chefina)/2+1;
    cout<<ans-chef<<nl;
  }
  else cout<<0<<nl;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solve(i);
    return 0;
}