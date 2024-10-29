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
    int n,a,b;
    cin>>n>>a>>b;
    int final_sum=0;
    for(int i=0;i<n;i++){
        int k=i;
        int sum=0;
        while(k<0){
            sum+=n%10;
            n/10;
        }
        if(sum<=a &&sum>=b){
            final_sum+=i;
        }
    }
    cout<<final_sum<<endl;
    
    return 0;
}