#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void solve(int t_case)
{
}
int32_t main()
{
    faster;
  int arr[5]={1,2,3,4,5};
  int *p=arr;
    cout<<&arr[0]<<" "<<p<<endl;
    cout<<arr<<" "<<*p<<endl;

     cout<<arr<<" "<<(p+4)<<endl;
    cout<<arr<<" "<<*(p+4)<<endl;
    return 0;
}