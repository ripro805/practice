#include <iostream>
using namespace std;
class CircularQueue{
public:
int size;
int f;
int r;
int*arr;

CircularQueue(int s){
size=s;
f=r=0;
arr= new int[s];

}
~CircularQueue(){
    delete[] arr;
}
 bool isFULL(){
  return (r+1)%size==f;
 }

 bool isEmpty(){
    return r==f;
 }

 void enqueue(int val){
    if(isFULL()){
        cout<<"Queue is full"<<endl;
    }
    else{
        r=(r+1)%size;
        arr[r]=val;
        cout<<"Enqueued element:"<<val<<endl;
    }
 }
 int dequeue(){
    int a=-1;
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        f=(f+1)%size;
        a=arr[f];
    }
    return a;
 }

};
int main() {
    CircularQueue q(4);
    
    
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
    if (q.isFULL()) {
        cout << "Queue is full\n";
    }

    return 0;
}