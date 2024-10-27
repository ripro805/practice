#include <iostream>
#include <cstdlib>
using namespace std;

class Stack
{
private:
    int size;
    int top;
    char *arr;

public:
    Stack(int size)
    {
        this->size = size;
        this->top = -1;
        this->arr = new char[size];
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
    void push(char val)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            arr[++top] = val;
        }
    }
    char pop()
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
};

bool parenthesisMatch(const char *exp)
{
    Stack sp(100);

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            sp.push('(');
        }
        if (exp[i] == '{')
        {
            sp.push('{');
        }
        if (exp[i] == '[')
        {
            sp.push('[');
        }
        else if (exp[i] == ')'||exp[i] == '}'||exp[i] == ']')
        
        {
            if (sp.isEmpty())
            {
                return false;
            }
            sp.pop();
        }
    }
    return sp.isEmpty();
}

int main()
{
    const char* exp="[7-{8*(3*4)+11+12}-8]";
    if (parenthesisMatch(exp))
    {
        cout << "The parenthesis is matching\n";
    }
    else
    {
        cout << "The parenthesis is not matching\n";
    }
    return 0;
}
