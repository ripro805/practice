#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int32_t main()
{
    faster;
    myStack st,st2;
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
    st2.push(y);

}
bool flag=true;
while(!st.empty() && !st2.empty()){
    if(st.size()!=st2.size()){
    flag=false;
    break;
}
else{
    if(st.top()==st2.top()){
        flag=true;
    }
    else{
        flag=false;
    }
    if(!st.empty())
    st.pop();
    if(!st2.empty())
    st2.pop();
    
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