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
    stringstream ss(s);
    string word;
    ss>>word;
    reverse(word.begin(),word.end());
    cout<<word;
    while(ss>>word){
    reverse(word.begin(),word.end());
    cout<<" "<<word;
    }
    return 0;
}