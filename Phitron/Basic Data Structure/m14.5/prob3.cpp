#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    stack<int>st1,st2;
     int n;
    cin>>n;
    
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st1.push(x);

}
    while(!st1.empty()){
        st2.push(st1.top());
        if(!st1.empty())
        st1.pop();
    }

    while(!st2.empty()){
        cout<<st2.top()<<" ";
        if(!st2.empty()){
            st2.pop();
        }
    }
    cout<<nl;



    return 0;
}