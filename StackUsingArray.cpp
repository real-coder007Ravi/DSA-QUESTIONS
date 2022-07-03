#include<iostream>
using namespace std;
#include<climits>
class StackUsingArray{
     int *data;
     int nextIndex;
     int capacity;
     public:
     //Constructor to initialise Elements
      StackUsingArray(int TotalSize){
        data=new int[TotalSize];
        nextIndex=0;
        capacity=TotalSize;
      }
      //Returns total no of elements in the stack
      int size(){
        return nextIndex;
      }
      //Check Stack is empty or not
      bool isEmpty(){
        return nextIndex==0;
      }
      //Insert Elements
      void push(int element){
        if(nextIndex==capacity){
            cout<<"Stack Full"<<endl;
            return;
        }
        data[nextIndex]=element;
        nextIndex++;
      }
      //Delete Elements
      int pop(){
          if(isEmpty()){
            cout<<"Stack Empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
       
      }
      //Topmost Elements
      int top(){
         if(isEmpty()){
            cout<<"Stack Empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];}

      

};
int main()
{
    StackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
}