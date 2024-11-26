#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    string s = "hello world";
    string s2 = " hi";
    s += s2; // append another string.

    cout << s << endl;
    s.append(" hello"); // append another string.

    cout << s << endl;
    s.push_back('o'); // add character to the last of the string.

    cout << s << endl;
    s.pop_back(); // remove the last character of the string.

    cout << s << endl;
    s.assign(s2); // assign string.

    cout << s << endl;
    s.assign("Hello World"); // assign string.

    cout << s << endl;
    s.replace(6, 5, "Bangladesh"); // replace a portion of the string.

    cout << s << endl;
    s.insert(6, "Prova, I am from "); // insert a portion to a specific position.

    cout << s << endl;
    s.erase(6, 10); // erase characters from the string.

    cout << s << endl;
    return 0;
}