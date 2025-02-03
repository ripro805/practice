#include <bits/stdc++.h>
using namespace std;

class comparator {
public:
    bool operator()(pair<string, int> a, pair<string, int> b) {
        if (a.first != b.first)
            return a.first > b.first; 
        return a.second < b.second;   
    }
};

int main() {
   

    priority_queue<pair<string, int>, vector<pair<string, int>>, comparator> pq;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        int x;
        cin >> s >> x;
        pq.push({s, x});
    }

    while (!pq.empty()) {
        pair<string, int> pr = pq.top();
        cout << pr.first << " " << pr.second << endl;
        pq.pop();
    }

    return 0;
}
