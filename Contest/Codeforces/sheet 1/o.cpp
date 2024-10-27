#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
  long a,b;
  char s;
  cin>>a>>s>>b;

  switch (s)
  {
  case '+':
  cout<<a+b<<endl;
    break;
    case '-':
  cout<<a-b<<endl;
    break;
    case '*':
  cout<<a*b<<endl;
    break;
    case '/':
  cout<<a/b<<endl;
    break;
  }
    return 0;
}
