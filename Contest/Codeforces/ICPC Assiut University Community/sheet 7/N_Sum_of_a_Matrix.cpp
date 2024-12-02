#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
const int max_size = 100;
int a[max_size][max_size],b[max_size][max_size],res[max_size][max_size];
void addmatrix(int r,int c,int i=0,int j=0)
{
    if(i==r) return;

    res[i][j]=a[i][j]+b[i][j];

    if(j+1<c)
    addmatrix(r,c,i,j+1);
    else
    addmatrix(r,c,i+1,0);
}
int32_t main()
{
    faster;
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    addmatrix(r,c);
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}