#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);


int32_t main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int even_cnt=0;
        int odd_cnt=0;
        for(int i=0;i<n;i++){
           if(a[i]%2==0){
            even_cnt++;
           }
           else{
            odd_cnt++;
           }
        }
           if(even_cnt==odd_cnt){
            cout<<0<<endl;
           }
           else if(n%2==0){
            cout<<abs(even_cnt-odd_cnt)/2<<endl;
           }
           else{
            cout<<-1<<endl;
           }
        
    }
    return 0;
}