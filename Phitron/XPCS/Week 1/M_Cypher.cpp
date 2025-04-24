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

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> later(n);
        for (int i = 0; i < n; i++)
        {
            cin >> later[i];
        }

        vector<int> main(n);

        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            string mvs;
            cin >> mvs;

            int curr = later[i];

            for (char mv : mvs)
            {
                if (mv == 'U')
                {
                    curr = (curr - 1 + 10) % 10;
                }
                else if (mv == 'D')
                {
                    curr = (curr + 1) % 10;
                }
            }

            main[i] = curr;
        }

        for (int i = 0; i < n; i++)
        {
            cout << main[i] << " ";
        }
        cout << nl;
    }

    return 0;
}
