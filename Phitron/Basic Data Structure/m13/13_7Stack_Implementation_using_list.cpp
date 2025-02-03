#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int32_t main()
{
    faster;
    myStack st;
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