#include<iostream>
using namespace std;
template<typename T>
class Node{
    public:
    T data;
    Node<T>*next;
  
     Node(T data){
        this->data=data;
        next=NULL;
     }
};
template<typename T>
class QueueUsinglinkedList{
    Node<T>*head;
    Node<T>*tail;
    int size;
    public:
    QueueUsinglinkedList(){
           head=NULL;
           tail=NULL;
           size=0;
    }
    void enqueue(T element){
        Node<T>*newNode=new Node<T>(element);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        size++;
    }
    //Size-Total no of elements in the queue
    int getSize(){
        return size;
    }
    //Check if Queue is Empty or not
    bool isEmpty(){
        return size==0;
    }
    //Delete Elements
    T dequeue(){
       if(isEmpty()){
            cout<<"Queue Empty"<<endl;
            return 0;
        }
        T ans=head->data;
        Node<T>*temp=head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }
    //Front Element
    T front(){
        if(isEmpty()){
            cout<<"Queue Empty"<<endl;
            return 0;
        }
        return head->data;
    }


};
int main()
{
    QueueUsinglinkedList<int>q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
}