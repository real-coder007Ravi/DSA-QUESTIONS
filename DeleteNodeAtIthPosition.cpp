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
Node* deleteNode(Node *head,int pos){
    int count=0;
     Node*temp=head;
     if(head==NULL)return head;
    if(pos==0){
       head= temp->next;
     
       return head;
    }
   
    while(temp!=NULL&&count<pos-1){
        count++;
        temp=temp->next;
        
    }
    if(temp==NULL||temp->next==NULL)return head;
    if(temp!=NULL){
        Node *a=temp->next;
        Node *b=a->next;
        temp->next=b;
        delete a;
        
    }
    return head;
}
Node* TakeInput(){
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    while(data!=-1){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=tail->next;
    }
        cin>>data;
    }
    return head;
}
void print(Node*head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node *head=TakeInput();
    print(head);
    int pos;
    cin>>pos;
    head=deleteNode(head,pos);
    print(head);
}