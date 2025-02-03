#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

class myQeue{
    public:
    list<int>l;
    void push(int val){
       l.push_back(val);
    }
    void pop(){
       l.pop_front();
    }
    int front(){
        
        return l.front();
    }
    int back(){
        
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }

};
int32_t main()
{
    faster;
    myQeue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }

    
    if (!q.empty()) {
        cout << q.front() << " " << q.back() << " " << q.size() << nl;
    }
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout <<nl;

    return 0;
}