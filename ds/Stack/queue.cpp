#include <iostream>

using namespace std;

class Queue {
    int *arr;
    int front, rear, capacity;

public:
    Queue(int size) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() {
        return front > rear;
    }

    bool isFull() {
        return rear == capacity - 1;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue overflow" << endl;
            return;
        }
        arr[++rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow" << endl;
            return;
        }
        front++;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int size() {
        return rear - front + 1;
    }

    void clear() {
        front = 0;
        rear = -1;
    }
};

class Stack {
    Queue q1, q2;

public:
    Stack(int size) : q1(size), q2(size) {}

    void push(int x) {
        // Push x first in empty q2
        q2.enqueue(x);

        // Push all the remaining elements in q1 to q2.
        while (!q1.isEmpty()) {
            q2.enqueue(q1.getFront());
            q1.dequeue();
        }

        // Swap the names of two queues
        Queue temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop() {
        // If no elements are there in q1
        if (q1.isEmpty())
            return;
        q1.dequeue();
    }

    int top() {
        if (q1.isEmpty())
            return -1;
        return q1.getFront();
    }

    int size() {
        return q1.size();
    }
};

// Driver code
int main() {
    Stack s(10); // Assuming a maximum stack size of 10
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "current size: " << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    cout << "current size: " << s.size() << endl;
    return 0;
}
