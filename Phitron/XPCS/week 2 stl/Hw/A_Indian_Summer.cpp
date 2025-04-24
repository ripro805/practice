#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n;
    cin>>n;
    map<pair<string, string>,bool> mp; 
    
    for (int i = 0; i < n; i++) {
        string species, color;
        cin >> species >> color;

        mp[{species,color}] = true;  
    }

   
    cout << mp.size() << endl;

    return 0;
}