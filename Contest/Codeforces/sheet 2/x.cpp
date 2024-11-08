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
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int one=0;
        while(n>0){
            int digit =n%2;
            if(digit==1){
                one++;
            }
            n/=2;
        }
        int deci=0;
        for(int i=1;i<=one;i++){
            deci=deci*2+1;
        }
        cout<<deci<<endl;
    }
    return 0;
}