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
    cout<<s<<endl;
    stringstream ss(s);
    string word;
    while(ss>>word){
        cout<<word<<endl;
    }
    return 0;
}