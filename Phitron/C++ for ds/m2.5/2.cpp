#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
// void solve(int t_case)
// {
// }
int32_t main()
{
    faster;
    // int t;
    // cin >> t;
    // for(int i=1; i<=t; i++)
    //     solve(i);
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int*b=new int[m];
    for (int i = n; i < m; i++)
    {
        cin>>b[i];
    }
    for (int i=0;i<n;i++){
        b[i]=arr[i];
    }
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    cout<<nl;

    delete[] arr;
    delete[] b;
    
    return 0;
}