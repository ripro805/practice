#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void printSpace(int cnt)
{
    if(cnt==0){
        return;
    }
    cout<<" ";
    printSpace(cnt-1);
}
void printStar(int cnt){
    if(cnt==0){
        return;
    }
    cout<<"*";
    printStar(cnt-1);
}
void PrintRow(int row,int n){
    if(row>n){
        return;
    }
    int space=n-row;
    int star=2*row-1;

    printSpace(space);
    printStar(star);
    cout<<nl;

    PrintRow(row+1,n);
}
int32_t main()
{
    // faster;
    // int t;
    // cin >> t;
    // for(int i=1; i<=t; i++)
    //     solve(i);

    int n;
    cin>>n;

    PrintRow(1,n);
    return 0;
}