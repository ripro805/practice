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
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Before Copy"<<endl;

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

     for(int i=0;i<n;i++){
       int temp=a[i];
       a[i]=b[i];
       b[i]=temp;

    }
    cout<<"After copy"<<endl;
    
     for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    
    return 0;
}
