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
Node * TakeInput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
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
void print(Node *head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* Insertnode(Node *head,int pos,int data){
    int count=0;
    Node*temp=head;
    Node *newNode=new Node(data);
    if(pos==0){
        newNode->next=head;
        head=newNode;
        return head;
    }
    while(temp!=NULL&&count<pos-1){
        count++;
        temp=temp->next;

    }
    if(temp!=NULL){
        Node *a=temp->next;
        temp->next=newNode;
        newNode->next=a;
    }
    return head;
}
int main()
{
    Node *head=TakeInput();
    print(head);
    int pos,data;
    cin>>pos>>data;
    head=Insertnode(head,pos,data);
    print(head);
}