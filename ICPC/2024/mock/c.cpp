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
    int i = 1;
    while (t--)
    {

        int a, b, c;
        cin >> a >> b >> c;
        bool flag = false;
        if (a == 6 && b == 1 && c == 1)
        {
            flag = true;
        }
        else if (b == 6 && a == 1 && c == 1)
        {
            flag = true;
        }
        else if (c == 6 && a == 1 && b == 1)
        {
            flag = true;
        }
        else if (a == 4 && b == 0 && c == 1)
        {
            flag = true;
        }
        else if (a == 4 && b == 1 && c == 0)
        {
            flag = true;
        }
        else if (b == 4 && a == 0 && c == 1)
        {
            flag = true;
        }
        else if (b == 4 && a == 1 && c == 0)
        {
            flag = true;
        }
        else if (c == 4 && a == 0 && b == 1)
        {
            flag = true;
        }
        else if (c == 4 && a == 1 && b == 0)
        {
            flag = true;
        }
        else if (a == 3 && b == 3 && c == 3)
        {
            flag = true;
        }
        cout << "Case " << i++ << ": ";

        if (flag==true)
        {
            cout << "perfectus" << nl;
        }
        else
        {

            cout << "invalidum" << nl;
        }
    }

    return 0;
}