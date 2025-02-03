#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N;
    cin >> N;

    const ll MAX_LIMIT = 1e9;

    for (ll X = 0; X <= MAX_LIMIT; ++X) {
        for (ll Y = 0; Y <= MAX_LIMIT; ++Y) {
            if ((X * X + Y * Y) % N == 0) { 
                cout << X << " " << Y << nl;
                return 0;
            }
        }
    }

    cout << "No solutions" << nl;
    return 0;
}