#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int main() {
    faster;
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i] + 1) {
                count++;
                break; 
            }
        }
    }

    cout << count << nl;
    return 0;
}
