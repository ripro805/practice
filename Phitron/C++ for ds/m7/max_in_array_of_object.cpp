#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int32_t main()
{
    faster;
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks > mx.marks)
        {
            mx = a[i];
        }
    }
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;

    return 0;
}
