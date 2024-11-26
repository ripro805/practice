#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define optimize                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef double dl;

string solve(long long n, int start)
{
    int turn = start;

    while (n > 0)
    {
        long long mx_rmv = n / 2;

        if (turn == 1)
        {
            if (mx_rmv % 2 == 0)
            {
                mx_rmv -= 1;
            }

            if (mx_rmv < 1)
            {
                return "Evenius";
            }

            n -= mx_rmv;
            turn = 2;
        }
        else
        {
            if (mx_rmv % 2 != 0)
            {
                mx_rmv -= 1;
            }

            if (mx_rmv < 3)
            {
                return "Oddius";
            }

            n -= mx_rmv;
            turn = 2;
        }
    }

    if (turn == 1)
    {
        return "Evenius";
    }
    else
    {
        return "Oddius";
    }
}

int32_t main()
{
    optimize;
    int T;
    cin >> T;
    int i = 1;
    while (T--)

    {
        long long n;
        int start;
        cin >> n >> start;

        string winn = solve(n, start);
        cout << "Case " << i++ << ": " << winn << endl;
    }

    return 0;
}
