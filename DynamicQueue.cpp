#include<iostream>
using namespace std;
template<typename T>
class Queue{
    T *data;
    int nextIndex;
    int FirstIndex;
    int size;
    int capacity;
    public:
     Queue(){
        data=new T[4];
        nextIndex=0;
        FirstIndex=-1;
        size=0;
        capacity=4;
     }
     //Total no of Elements in the queue
     int getSize(){
        return size;
     }
     //Check if Queue is Empty or not
     bool isEmpty(){
        return size==0;
     }
     //Insert Element in the queue
     void enqueue(T element){
        if(size==capacity){
            T *newData=new T[2*capacity];
            int j=0;
            for(int i=FirstIndex;i<capacity;i++){
                newData[j]=data[i];
                j++;
            }
             for(int i=0;i<FirstIndex;i++){
                newData[j]=data[i];
                j++;
            }
            delete[]data;
            data=newData;
            FirstIndex=0;
            nextIndex=capacity;
            capacity*=2;
        }
        data[nextIndex]=element;
        nextIndex=(nextIndex+1)%capacity;
        if(FirstIndex==-1){
            FirstIndex=0;
        }
        size++;
     }
     T front(){
        if(isEmpty()){
            cout<<"Queue empty"<<endl;
            return 0;
        }
        return data[FirstIndex];     }
      T dequeue(){
        if(isEmpty()){
            cout<<"Queue empty"<<endl;
            return 0;
        }
        T ans=data[FirstIndex];
        FirstIndex=(FirstIndex+1)%capacity;
        size--;
        if(size==0){
            FirstIndex=-1;
            nextIndex=0;
        }
        return ans;
      }
};
int main()
{
    Queue<int>q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(40);
    q.enqueue(70);
    q.enqueue(24);
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
}