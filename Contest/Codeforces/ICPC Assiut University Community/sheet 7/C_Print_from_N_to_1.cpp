#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void print(int x, int n)
{
    if (x < 1)
    {
        return;
    }
    cout << x;
    if (x > 1)
    {
        cout << " ";
    }
    print(x - 1, n);
}
int32_t main()
{
    int n;
    cin >> n;
    print(n, 1);
    cout << endl;

    return 0;
}