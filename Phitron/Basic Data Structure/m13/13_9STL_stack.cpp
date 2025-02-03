#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
   stack<int>st;
    int n;
    cin>>n;
    
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);

}
while(!st.empty()){
cout<<st.top()<<nl;
st.pop();
}
    return 0;
}