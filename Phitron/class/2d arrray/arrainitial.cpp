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
    int arr[3] [5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<"i="<<i<< " "<<"j="<<j<<" "<<"address="<<arr[i][j]<<" || ";
        }
        cout<<endl;
    }
    return 0;
} 