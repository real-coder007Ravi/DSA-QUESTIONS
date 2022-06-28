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
Node* TakeInput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
        Node *newNode=new Node(data);
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
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int Length(Node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
int main()
{
    Node *head=TakeInput();
    print(head);
    cout<<endl;
    cout<<"Length Of Linked List: "<<Length(head)<<endl;
}