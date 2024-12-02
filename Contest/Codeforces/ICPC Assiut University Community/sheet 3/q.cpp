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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        if(n==0){
            cout<<"0"<<endl;
            continue;

        }
        while(n>0){
            cout<<n%10;
            n/=10;
            if(n>0){
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}
