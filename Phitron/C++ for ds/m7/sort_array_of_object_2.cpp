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
bool cmp(Student l,Student r){
    // if(l.roll<r.roll){
    //     return true;
    // }
    // else{
    //     return false;
    // }
    return l.roll>r.roll;
}

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
    sort(a,a+n,cmp);

      for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    } 


    return 0;
}
