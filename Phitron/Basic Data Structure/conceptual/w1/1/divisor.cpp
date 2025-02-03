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
    for (int test_case = 1; test_case <= t; test_case++)  
    {
        int n;
        cin >> n;
        vector<int> v;

        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);  
                if (n / i != i) 
                {
                    v.push_back(n / i);
                }
            }
        }

        sort(v.begin(), v.end());

        cout << "case " << test_case << ": ";
        for (auto element : v)
        {
            cout << element << " ";
        }
        cout << nl;
    }
    return 0;
}
