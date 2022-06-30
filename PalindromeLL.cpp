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
    Node * tail=NULL;
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
bool isPalindrome(Node *head){
    if(head==NULL||head->next==NULL){
        return true;
    }
    Node* temp1=head;
    Node* temp2=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    if(head->data==temp1->data){
        while(temp2->next->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=NULL;
        bool so=isPalindrome(head->next);
        if(so)return true;
        else return false;}
     else{
           return false;}
    
}
int main()
{
    Node* head=TakeInput();    
    bool ans=isPalindrome(head);
    cout<<ans<<endl;
}