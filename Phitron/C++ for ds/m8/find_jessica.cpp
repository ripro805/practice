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
    bool found= false;
    while(ss>>word){
        if (word=="Jessica"){
        found =true;
        break;
        }
    }
    if(found){
        cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    return 0;
}