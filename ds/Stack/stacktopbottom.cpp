#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int top;
    int *arr;

public:
    // costructor
    Stack(int size)
    {
        this->size = size;
        this->top = -1;
        this->arr = new int[size];
        cout << "Stack has been created" << endl;
    }
    ~Stack()
    {
        delete[] arr;
    }
    bool isEmpty() const
    {
        return top == -1;
    }
    bool isFull() const
    {
        return top == size - 1;
    }
    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack Overflow! Cannot push " << val << " to the stack" << endl;
        }
        else
        {
            arr[++top] = val;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        else
        {

            return arr[top--];
        }
    }
    int stackTop() const
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    int stackBottom() const
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        else
        {
            return arr[0];
        }
    }
};
int main()
{
    Stack sp(50);
    cout << "Before pushing, Full: " << sp.isFull() << endl;
    cout << "Before pushing, Empty: " << sp.isEmpty() << endl;

    sp.push(1);
    sp.push(10);
    sp.push(35);
    sp.push(38);
    sp.push(48);
    sp.push(67);
    sp.push(5);
    sp.push(9);
    sp.push(89);
    sp.push(21);
    sp.push(100);
    sp.push(32);
    sp.push(65);
    sp.push(101);
    cout << "The topmost value is:" << sp.stackTop() << endl;
    cout << "The Bottommost value is:" << sp.stackBottom() << endl;
    return 0;
}