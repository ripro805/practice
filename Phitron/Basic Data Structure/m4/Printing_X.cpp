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

    int mid = n / 2;

    for (int i = 0; i < mid; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "\\";
        for (int j = 0; j < n - 2 * (i + 1); j++) {
            cout << " ";
        }
        cout << "/" << endl;
    }

    for (int i = 0; i < mid; i++) {
        cout << " ";
    }
    cout << "X" << endl;

    for (int i = mid - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < n - 2 * (i + 1); j++) {
            cout << " ";
        }
        cout << "\\" << endl;
    }
    return 0;
}