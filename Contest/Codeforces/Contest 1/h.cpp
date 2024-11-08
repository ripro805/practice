#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, a;
    cin >> n >> k >> a;

    long long product = (n * k) / a;
    double q = (n * k) / a, test = product -q;

    if (test > 0)
    {
        cout << "double" << endl;
    }
    else if (product <= 2147483647)
    {
        cout << "int" << endl;
    }
    else
    {
        cout << "long long" << endl;
    }

    return 0;
}
