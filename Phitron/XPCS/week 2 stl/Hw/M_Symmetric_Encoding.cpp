#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve(int t_case)
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> st;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }
    vector<char> v;
    for(auto x:st){
        v.push_back(x);
    }
    int m = v.size();

    map<char, char> mp;
    for (int i = 0; i < m; i++) {
        mp[v[i]] = v[m - 1 - i];
    }

    for (char ch : s) {
        cout << mp[ch];
    }
    cout << nl;
}

int32_t main()
{
    faster;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}
