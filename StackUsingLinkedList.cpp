#include<iostream>
using namespace std;
template<typename T>
class Node{
    public:
    T data;
    Node<T> *next;
    public:
    Node(T data){
        this->data=data;
        this->next=NULL;
    }
};
template<typename T>
class Stack{
    Node<T>*head;
    int size;
    public:
    Stack(){
        head=NULL;
        size=0;
    }
    int getSize(){
        return size;

    }
    bool isEmpty(){
        if(size==0){
            return true;
        }
        else{
            return false;
        }

    }
    void push(T element){
        Node<T>* newNode=new Node<T>(element);
        if(head==NULL){
            head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
        size++;

    }
    T pop(){
        if(isEmpty()){
            cout<<"Stack Empty"<<endl;
            return -1;
        }
        Node<T>* temp=head;
        head=head->next;
        T ans=head->data;
        delete temp;
        size--;
        
        return ans;
         

    }
    T top(){
        if(isEmpty()){
            cout<<"Stack Empty"<<endl;
            return -1;
        }
        return head->data;
        
    }
};
int main()
{
    Stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.getSize()<<" "<<s.pop()<<" "<<s.top()<<" "<<s.isEmpty()<<" "<<endl;
}