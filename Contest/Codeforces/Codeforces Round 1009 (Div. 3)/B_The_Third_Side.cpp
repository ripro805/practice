#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nl "\n"



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
    cin >> n;
    priority_queue<int> pq;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }
    
    while (pq.size() > 1) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        pq.push(a + b - 1); 
    }
    
    cout << pq.top() << nl;
    }
    return 0;
}