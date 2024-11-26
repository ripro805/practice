#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void print_max(int arr[],int n,int indx,int crntmx)
{
    if(indx==n)
    {
        return;
    }
    crntmx=max(crntmx,arr[indx]);
    cout<<crntmx<<" ";
    print_max(arr,n,indx+1,crntmx);
}
int32_t main()
{
    faster;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        print_max(arr,n,0,arr[0]);
    return 0;
}