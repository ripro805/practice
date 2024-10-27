#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Stack {
private:
    int size;
    int top;
    char* arr;
public:
    Stack(int size) {
        this->size = size;
        this->top = -1;
        this->arr = new char[size];
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

    void push(char val) {
        if (isFull()) {
            cout << "Stack Overflow" << endl;
        } else {
            arr[++top] = val;
        }
    }

    char pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl;
            return '\0';  // Return null character in case of underflow
        } else {
            return arr[top--];
        }
    }

    char stackTop() const {
        if (isEmpty()) {
            return '\0';  // Return null character if the stack is empty
        } else {
            return arr[top];
        }
    }
};

int precedence(char ch) {
    if (ch == '*' || ch == '/') {
        return 3;
    } else if (ch == '+' || ch == '-') {
        return 2;
    } else {
        return 0;
    }
}

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

string infixToPostfix(const string& infix) {
    Stack sp(100);
    string postfix;
    int i = 0;  // Initialize the index i to 0

    while (infix[i] != '\0') {
        if (!isOperator(infix[i])) {
            postfix += infix[i];
            i++;
        } else {
            while (!sp.isEmpty() && precedence(infix[i]) <= precedence(sp.stackTop())) {
                postfix += sp.pop();
            }
            sp.push(infix[i]);
            i++;
        }
    }
    while (!sp.isEmpty()) {
        postfix += sp.pop();
    }
    return postfix;
}

int main() {
    string infix = "x-y/z-k*d";
    string postfix = infixToPostfix(infix);
    cout << "Postfix is " << postfix << endl;
    return 0;
}
