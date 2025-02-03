#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int32_t main()
{
    faster;
    stack<int>st;
    queue<int>q;
    int n;
    cin>>n;
    
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);

}
int m;
cin>>m;
    
for(int i=0;i<m;i++){
    int y;
    cin>>y;
    q.push(y);

}
bool flag=true;
while(!st.empty() && !q.empty()){
    if(st.size()!=q.size()){
    flag=false;
    break;
}
else{
    if(st.top()==q.front()){
        flag=true;
    }
    else{
        flag=false;
    }
    if(!st.empty())
    st.pop();
    if(!q.empty())
    q.pop();
    
}
}
if(flag){
    cout<<"YES"<<nl;
}
else{
    cout<<"NO"<<nl;
}
    return 0;
}