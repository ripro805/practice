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
    cin>>n;
    int m[n][n];
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];

        }

    }
    int main_diag=0,sec_diag=0;
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(i==j){
                main_diag+=m[i][j];
            }
            if(i+j==n-1){
                sec_diag+=m[i][j];
            }
        }
    }
    int diff= abs(main_diag-sec_diag);
    cout<<diff<<endl;

    return 0;
}