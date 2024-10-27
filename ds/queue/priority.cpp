#include <iostream>
using namespace std;

class PriorityQueue{
    public:
    int size;
    int f,r;
    int*arr;

    PriorityQueue(){
        f=r=-1;
        arr=new int[size];
    }
    ~PriorityQueue(){
        delete[] arr;
    }
    bool isEmpty() const{
        return f==-1;
    }
    bool isFUll()const{
        return (r+1)%size==f;
    }
    void enqueue(int val){
        if (isFUll()){
            cout<<"Queue is full"<<endl;
        }
        else{
            if (isEmpty()){
               f=0; 
            }
            r=(r+1)%size;
            arr[r]=val;
            cout<<"Enqueue Element: "<<val<<endl;
        }
    }
     int dequeue(){
        if(isEmpty()){
            cout<<"Qeueue is Empty"<<endl;
            return -1;
        }
        int smallIndx=f;
        int currentIndx=f;
        while (currentIndx!=r){
            if(arr[currentIndx]<arr[smallIndx]){
                smallIndx=currentIndx;
            }
            currentIndx=(currentIndx+1)%size;
        }
        if(arr[r]<arr[smallIndx]){
            smallIndx=r;
        }
        int smallval=arr[smallIndx];
        currentIndx=smallIndx;
        while(currentIndx!=r){
            arr[currentIndx]=arr[(currentIndx+1)%size];
            currentIndx=(currentIndx+1)%size;
        }
        if(r==f){
            f=r=-1;
        }
        else{
            if(r==0){
                r=size-1;
            }
            else{
                r-=1;
            }
        }
        return smallval;
     }
     void display() const{
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        int i=f;
        while(i!=r){
            cout<<arr[i]<<" ";
            i=(i+1)%size;
        }
        cout<<arr[r]<<endl;
     }
};

int main(){
    PriorityQueue pq;
    pq.enqueue(12);
    pq.enqueue(5);
    pq.enqueue(20);
    pq.enqueue(1);

    cout<<"Queue after insertation:";
    pq.display();
    cout<<"Remove small element:"<<pq.dequeue()<<endl;

    cout<<"Queue after removal: ";
    pq.display();
    return 0;
}   