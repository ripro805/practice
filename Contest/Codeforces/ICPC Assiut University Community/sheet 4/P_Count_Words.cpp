#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    string s;
    getline(cin,s);
    for (char &c : s) {
        if (!isalpha(c) && c != ' ') {
            c = ' '; 
        }
    }
    stringstream ss(s);
    string word;
    int cnt=0;
    while(ss>>word){
        cnt++;
    }
    cout<<cnt<<nl;
    return 0;
}