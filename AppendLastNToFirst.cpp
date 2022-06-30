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
int length(Node*head){
    if(head==NULL)return 0;
    if(head->next==NULL)return 1;
    int ans=length(head->next);
    return 1+ans;
}
Node* AppendLastNToFirst(Node* head,int pos){
    int len=length(head);
    int FirstSpot=len-pos-1;
    Node*temp=head;
    int count=0;
    if(head==NULL) return head;
    if(pos==0) return head;
    while(count<FirstSpot){
        count++;
        temp=temp->next;
    }
   Node*a=head;
   Node*b=temp->next;
   head=temp->next;
   temp->next=NULL;
   while(b->next!=NULL){
        b=b->next;
   }
   b->next=a;
   return head;

}
int main()
{
    Node*head=takeInput();
    print(head);
    int pos;cin>>pos;
    head=AppendLastNToFirst(head,pos);
    print(head);
}