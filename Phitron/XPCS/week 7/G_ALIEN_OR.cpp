#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve()
{
    int n,k;
    cin>>n>>k;
    set<string>st;
        for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        st.insert(s);
    }
   string  temp(k,'0');
    for(int i=k-1;i>=0;i--){
        temp[i]='1';
        if(st.find(temp)==st.end()){
            cout<<"NO"<<nl;
            return;
        }
        temp[i]='0';
    }
    cout<<"YES"<<nl;

}
int32_t main()
{
    faster;
    int tt;
    cin >> tt;
    while(tt--)
        solve();
    return 0;
}