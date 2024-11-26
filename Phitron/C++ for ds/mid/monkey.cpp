#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    string line;
    while (getline(cin, line))
    {
        char str[100000];
        int indx=0;
        for (char c : line)
        {
            if (c != ' ')
            {
                str[indx++]= c;
            }
        }
        sort(str,str+indx);
        for (int i = 0; i < indx; i++) {
            cout <<str[i] ;
        }
        cout<<endl;
    }
     

    return 0;
}