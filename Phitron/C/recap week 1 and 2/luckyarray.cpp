#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n;
    cin >> n;
    long long a[n];
    for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long min=a[0];
        
        for(int i=0;i<n;i++){
            if(a[i]<=min){
                min=a[i];
               
        }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]==min){
               count++;
               
        }
        }
        
        if(count%2==0){
            cout<<"UnLucky"<<endl;
        }
        else{
            cout<<"Lucky"<<endl;
        }
    return 0;
}
