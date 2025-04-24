#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int f1=0,f2=0;
    for(int i=0;i<n;i++){
         if(i%2==0){
            if(a[i]=='1')f1--;
            if(b[i]=='0')f2++;
         } 
         else{
            if(a[i]=='1')f2--;
            if(b[i]=='0')f1++;
         }
         
    }
    if(f1>=0&&f2>=0) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
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