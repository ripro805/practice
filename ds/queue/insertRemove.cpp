#include <iostream>
#include <cstdlib>
using namespace std;

class Queue {
public:
    int size;
    int f;
    int r;
    int* arr;

    Queue(int sz) {
        size = sz;
        f = r = 0;
        arr = new int[size];
    }

    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() {
        return r == f;
    }

    bool isFull() {
        return r == size - 1;
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "This Queue is full\n";
        } else {
            r++;
            arr[r] = val;
            cout << "Enqueued element: " << val << "\n";
        }
    }

    int dequeue() {
        int a = -1;
        if (isEmpty()) {
            cout << "This Queue is empty\n";
        } else {
            f++;
            a = arr[f];
        }
        return a;
    }
};

int main() {
    Queue q(4);
    
    q.enqueue(12);
    q.enqueue(15);
    q.enqueue(1); 
    cout << "Dequeuing element " << q.dequeue() << "\n";
    cout << "Dequeuing element " << q.dequeue() << "\n";
    cout << "Dequeuing element " << q.dequeue() << "\n";
    q.enqueue(45);
    q.enqueue(45);
    q.enqueue(45);
 
    if (q.isEmpty()) {
        cout << "Queue is empty\n";
    }
    if (q.isFull()) {
        cout << "Queue is full\n";
    }

    return 0;
}
