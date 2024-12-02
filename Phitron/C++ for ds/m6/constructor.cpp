#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);


int32_t main()
{
    faster;
    //way of  string constructor
    //1
    string s("hello world");
    cout<<s<<endl;
    //2
     string r("hello world",4);
    cout<<r<<endl;
    //3
     string q="hello world";
     string t(s,2);
    cout<<t<<endl;
    //4
     string v(10,'B');
    cout<<v<<endl;

    return 0;
}