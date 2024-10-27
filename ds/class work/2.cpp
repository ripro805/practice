#include <iostream>
#include <queue>
using namespace std;

class Stack {
private:
    queue<int> q1, q2;

public:
   
    void push(int x) {
        
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        
       
        q1.push(x);
        
       
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

   
    void pop() {
        if (q1.empty()) {
           cout << "Stack is empty. Cannot pop.\n";
            return;
        }
        q1.pop();
    }

   
    int top() {
        if (q1.empty()) {
            cout << "Stack is empty. No top element.\n";
            return -1;
        }
        return q1.front();
    }

    
    bool empty() {
        return q1.empty();
    }

   
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Top element: " << s.top() << endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}
