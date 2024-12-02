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
    int k,s;
    cin>>k>>s;
    int cnt=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
        int l=s-i-j;
        {

        if(l>=0 && l<=k){
            cnt++;
        }
    }
    }
    }
    cout<<cnt<<endl;
}


