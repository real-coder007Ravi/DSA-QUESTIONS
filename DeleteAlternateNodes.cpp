#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    public:
     Node(int data){
        this->data=data;
        next=NULL;
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
        else {
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
void DeleteAlternateNodes(Node* head){
    if(head==NULL)return;
    Node* prev=head;
    Node* curr=head->next;
    while(prev!=NULL&&curr!=NULL){
        prev->next=curr->next;
        curr->next=NULL;
        prev=prev->next;
        if(prev!=NULL){
            curr=prev->next;
        }
    }
}
int main()
{
    Node* head=TakeInput();
    
    DeleteAlternateNodes(head);
    print(head);
}