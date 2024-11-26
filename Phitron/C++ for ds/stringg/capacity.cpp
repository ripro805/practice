#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    string s = "hello world";
    cout << s.size() << endl;     // returns the size of the string.
    cout << s.max_size() << endl; // returns the maximum size that string can hold.
    cout << s.capacity() << endl; // returns current available capacity of the string.

    if (s.empty()) // return true/false if the string is empty.

    {
        cout << "True" << endl;
    }

    else
    {
        cout << "False" << endl;
    }
    s.resize(15); // change the size of the string.

    cout << s << endl;

    s.clear(); // clear the string.
    cout << s << endl;
    return 0;
}