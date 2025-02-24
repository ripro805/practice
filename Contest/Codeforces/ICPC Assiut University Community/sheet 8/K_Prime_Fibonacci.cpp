#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

const int MAX_N = 50;
ll fib[MAX_N + 1];    
bool is_fib_prime[MAX_N + 1];

bool is_prime(ll n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void precompute() {
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= MAX_N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 1; i <= MAX_N; i++) {
        is_fib_prime[i] = is_prime(fib[i]);
    }
}

int32_t main() {
    faster;
    precompute(); 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (is_fib_prime[n]) cout << "prime" << nl;
        else cout << "not prime" << nl;
    }
    return 0;
}