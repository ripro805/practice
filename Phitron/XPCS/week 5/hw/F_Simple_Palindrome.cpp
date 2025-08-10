#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve() {
     string s = "aeiou";  
   ll n;
    cin >> n;
   
    ll ok=n/5;
    vector<char>v;

    for (int i = 1; i <= ok; i++) {
       for(int j=0;j<5;j++){
        v.push_back(s[j]);
       }
    }
    ll left=n%5;
   if(left!=0){
     for(int i=0;i<left;i++){
        v.push_back(s[i]);
     }
   }
sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x;
    }
    cout<<nl;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}