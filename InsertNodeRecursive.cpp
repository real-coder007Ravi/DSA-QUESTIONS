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
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1){
        Node* newNode=new Node(data);
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
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* InsertNode(Node *head,int pos,int data){
    //Base case
    if(head==NULL){
        return head;
    }
    //Small Calculation
    if(pos==0){
        Node* newNode=new Node(data);
        newNode->next=head;
        head=newNode;
        return head;
    }
    //Recursive Call
    Node *x=InsertNode(head->next,pos-1,data);
    head->next=x;
    return head;
}
int main()
{
    Node*head=TakeInput();
    
    head=InsertNode(head,2,99);
    print(head);
}