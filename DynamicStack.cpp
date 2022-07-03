#include<iostream>
using namespace std;
#include<climits>
class StackUsingArray{
     int *data;
     int nextIndex;
     int capacity;
     public:
     //Constructor to initialise Elements
      StackUsingArray(){
        data=new int[4];
        nextIndex=0;
        capacity=4;
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
            int *newData=new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }

        
        delete[]data;
        data=newData;
        capacity*=2;}
        data[nextIndex]=element;
        nextIndex++;
      }
      //Delete Elemenst
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
    StackUsingArray s;
     s.push(10);
     s.push(40);
     cout<<s.top()<<endl;


}