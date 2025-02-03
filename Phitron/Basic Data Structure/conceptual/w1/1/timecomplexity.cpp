#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    // O(1)
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    cout << sum << endl;
    // because here no change  depends on input

    // O(n)

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Hello" << endl;
    }
    // because here change  depends on input

    // O(sqrt(n))
    int n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        cout << "Hello prova" << endl;
    }

    // O(logn)
    int n;
    cin >> n;
    for (int i = 1; i <= n; i *= 2)
    {
        cout << "Hello prova" << endl;
    }

    // O(n*m)
    int n, m;
    cin >> n, m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "Hello prova" << endl;
        }
    }
    return 0;
}
