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
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int frst=-1,lst=-1;
    frst=s.find('B');
    lst=s.rfind('B');
    cout<<(lst-frst)+1<<nl;
   }
    return 0;
}