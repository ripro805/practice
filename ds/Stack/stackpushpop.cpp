#include <iostream>
using namespace std;

class Stack {
private:
    int size;
    int top;
    int* arr;

public:
    Stack(int size) {
        this->size = size;
        this->top = -1;
        this->arr = new int[size];
        cout << "Stack has been created successfully\n";
    }

    ~Stack() {
        delete[] arr;
    }

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == size - 1;
    }

    void push(int val) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << val << " to the stack\n";
        } else {
            arr[++top] = val;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop from the stack\n";
            return -1;
        } else {
            return arr[top--];
        }
    }

   
};

int main() {
    Stack sp(50);

    cout << "Before pushing, Full: " << sp.isFull() << endl;
    cout << "Before pushing, Empty: " << sp.isEmpty() << endl;

    sp.push(1);
    sp.push(23);
    sp.push(99);
    sp.push(75);
    sp.push(3);
    sp.push(64);
    sp.push(57);
    sp.push(46);
    sp.push(89);
    sp.push(6);
    sp.push(5);
    sp.push(75);
    sp.pop();
    sp.pop();
    sp.pop();
    sp.pop();
    sp.pop();
    sp.pop();
    sp.pop();
    sp.pop();
    sp.pop();
    sp.pop();
    sp.pop();
    sp.pop();



    return 0;
}
