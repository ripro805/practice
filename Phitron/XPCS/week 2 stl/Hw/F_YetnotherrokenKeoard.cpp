#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
    deque<int>cap,sml;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'&&s[i]!='B') cap.push_back(i);
        if(s[i]>='a'&&s[i]<='z'&&s[i]!='b') sml.push_back(i);
        if(s[i] == 'B' && !cap.empty()) {
            s[cap.back()] = '#'; 
            cap.pop_back();
        }
        if(s[i] == 'b' && !sml.empty()) {
            s[sml.back()] = '#'; 
            sml.pop_back();
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!='B'&&s[i]!='b'&&s[i]!='#') cout<<s[i];
    }
    cout<<nl;
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