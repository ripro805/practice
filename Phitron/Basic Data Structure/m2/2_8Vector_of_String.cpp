#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin >> t;
    cin.ignore();
    vector<string>v(t);
    for(int i=0;i<t;i++)
    {
       getline(cin,v[i]);
    }
    for(int i=0;i<t;i++){
        cout<<v[i]<<endl;
    }
    return 0;
}