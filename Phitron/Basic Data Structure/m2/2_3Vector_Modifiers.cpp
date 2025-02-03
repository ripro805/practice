#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> v2;
    v2 = v; // Assign another vector...O(N) if sizes are different, O(1) otherwise..
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << nl;
    v2.push_back(10); // Add an element to the end.O(1)

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << nl;
    v2.pop_back(); // Remove the last element.O(1)

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << nl;
    v2.insert(v2.begin() + 3, 100); // Insert elements at a specific position.O(N+K); where K is the number of elements to be inserted.

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << nl;
    v2.erase(v2.end() - 2); // Delete elements from a specific position.O(N+K); where K is the number of elements to be deleted.

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << nl;
    replace(v2.begin(), v2.end(), 3, 33); // Replace all the value with replace_value. Not under a vector.O(N)

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << nl;
    auto it = find(v2.begin(), v2.end(), 100); // Find the value V. Not under a vector.O(N)

    cout << *it << endl;
    return 0;
}