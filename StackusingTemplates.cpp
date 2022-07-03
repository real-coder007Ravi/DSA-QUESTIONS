#include<iostream>
using namespace std;
template<typename T>
class StackUsingArray{
    T *data;
    int nextIndex;
    int capacity;
    public:
     StackUsingArray(T Totalsize ){
        data=new T[Totalsize];
        nextIndex=0;
        capacity=Totalsize;
     }
     //Insert Elements
     void push(T element){
        if(nextIndex==capacity){
            T *newData=new T[2*capacity];
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            delete[]data;
            data=newData;
            capacity*=2;
        }
        data[nextIndex]=element;
        nextIndex++;
     }
     //Total Size-No of Elements present in the stack
     int getSize(){
        return nextIndex;
     }
     //check if stack is empty or not
     bool isEmpty(){
       
        if(nextIndex==0){
            return true;
        }
        else{
            return false;
        }
     }
     //Topmost Element
     T top(){
        if(isEmpty()){
            cout<<"stack Empty"<<endl;
            return 0;}
        return data[nextIndex-1];
     }
     T pop(){
        if(isEmpty()){
            cout<<"Stack Empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
     }
};
int main()
{
    StackUsingArray<int>s1(4);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    cout<<s1.top()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.top()<<endl;
    cout<<s1.isEmpty()<<endl;
    cout<<s1.getSize()<<endl;

}