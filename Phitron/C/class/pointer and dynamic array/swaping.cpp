#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
}
int32_t main()
{
    int a, b;
    cin >> a>>b;
     cout << a << " " << b << endl;
    int *x = &a;
    int *y = &b;
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << a << " " << b << endl;
    return 0;
}