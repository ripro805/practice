#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define optimize                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);

typedef long long ll;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool validTriangle(int a, int b, int c) {
    return (a > 0 && b > 0 && c > 0) && (a + b > c) && (a + c > b) && (b + c > a);
}

void solve(int a, int b, int c) {
    if (!validTriangle(a, b, c)) {
        
        return;
    }

    ll s = (a + b + c) / 2;
    
    ll area_sqr = s * (s - a) * (s - b) * (s - c);

    if (area_sqr <= 0) {  
        
        return;
    }

    ll num = 4 * area_sqr;
    ll den = (a + b + c) * (a + b + c);

    if (den == 0) {  
       
        return;
    }

    
    ll common_gcd = gcd(abs(num), abs(den));
    num /= common_gcd;
    den /= common_gcd;

    cout << num << "/" << den << endl;
}

int main() {
    optimize;
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        
        solve(x, y, z);
    }

    return 0;
}
