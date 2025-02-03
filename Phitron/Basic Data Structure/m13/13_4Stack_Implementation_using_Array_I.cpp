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
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    if(!st.empty()) //for removing runtime error or segmentation fault
       st.pop();
    if(!st.empty())
         cout<<st.top()<<nl;   

    return 0;
}