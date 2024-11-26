#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    char x;
    cin>>x;
    if (x>='a' &&x<='z'){
        cout<<char(x-32)<<endl;
    }
    else if(x>='A'&& x<='Z'){
        cout<<char(x+32)<<endl;
    }
    return 0;
}
