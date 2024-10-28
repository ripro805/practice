#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{   
    //implementing freequency array
    int n;
    cin>>n;
    int arr[n+10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int f[100000]={0};
    for(int i=0;i<n;i++){
        f[arr[i]]=1;
    }
    for(int i=0;i<n;i++){
        cout<<i<<" "<<f[i]<<endl;
    }

    //searching element 

    int m;
    cin>>m;
    for(int i=0; i<m;i++){
        int x;
        cin>>x;
        cout <<x<<" ";

        if(f[x]==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}