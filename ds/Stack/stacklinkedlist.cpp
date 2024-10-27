#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack() : top(nullptr) {}

    ~Stack()
    {
        while (top != nullptr)
        {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }

    void linkedListTraversal() const
    {
        Node *ptr = top;
        while (ptr != nullptr)
        {
            cout << "Element:" << ptr->data << endl;
            ptr = ptr->next;
        }
    }
    bool isEmpty() const{
        return top==nullptr;
    }
    bool isFull()const{
        Node* p=new(nothrow) Node;
        if(p==nullptr){
            return true;
        }
        else{
              delete p;
              return false;
        }
    }
    void push(int x){
        if(isFull()){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            Node*n=new Node;
            n->data=x;
            n->next=top;
            top=n;
        }
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
          return -1;
        }

    else{
        Node*n=top;
        top=top->next;
        int x=n->data;
        delete n;
        return x;
    }

    }
};

int main(){
    Stack sp;
    sp.push(7);
    sp.push(78);
    sp.push(2);
    sp.push(68);
    int element=sp.pop();
    cout<<"Poped element is:"<<element<<endl;
    sp.linkedListTraversal();
    return 0;
}