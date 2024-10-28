#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n;
    cin >> n;
    string str;
    cin >> str;

    int num = 0;
    int i = 0;
    while (i < n)
    {
        int digit = str[i] - '0';
        num = num * 10 + digit;
        i++;
    }
    cout << num << endl;
    return 0;
}
 