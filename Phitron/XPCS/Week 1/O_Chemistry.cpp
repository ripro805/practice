#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for(auto  c:s){
            freq[c-'a']++;
        }
        int odds=0;
        for(auto cnt:freq){
            if(cnt%2!=0){
                odds++;
            }
        }
        if(odds-k<=1) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    return 0;
}
