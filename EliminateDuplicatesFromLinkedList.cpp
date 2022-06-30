#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node * takeInput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
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
Node* EliminateDuplicates(Node* head){
    if(head==NULL)return head;
    Node* prev=head;
    Node*temp=head->next;
    while(temp!=NULL){
        if(prev->data==temp->data){
            temp=temp->next;
        }else{
            prev->next=temp;
            prev=temp;
            temp=temp->next;
        }
    }
    prev->next=temp;
    return head;

}
int main()
{
    Node *head=takeInput();
    
    head=EliminateDuplicates(head);
    print(head);
}