#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int s_wealth=a[n-1];
        int pos=n;
        for(int i=n-2;i>=0;i--){
            if(a[i]<=s_wealth/2){
                pos--;
            }
            else{
                break;
            }
        }
        cout<<pos<<endl;


    }
    return 0;
}
