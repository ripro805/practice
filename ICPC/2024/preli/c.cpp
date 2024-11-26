#include <bits/stdc++.h>
using namespace std;
#define optimize                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef double dl;

int32_t main()
{
    optimize;
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int N;
        long long K;
        cin >> N >> K;
        long long total_water = 0;

        for (int i = 0; i < N; i++)
        {
            long long x, y;
            cin >> x >> y;

            long long number_water = (K / x) + 1 / x;
            total_water += number_water;
        }

        cout << "Case " << t << ": " << total_water << endl;
    }

    return 0;
}