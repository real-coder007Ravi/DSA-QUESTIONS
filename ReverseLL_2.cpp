#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* TakeInput(){
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data;

    }
    return head;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* ReverseLl(Node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node* smallAns=ReverseLl(head->next);
    Node* tail=head->next;
    tail->next=head;
    head->next=NULL;
    return smallAns;
}
int main()
{
    Node* head=TakeInput();
   
    head=ReverseLl(head);
    print(head);
}