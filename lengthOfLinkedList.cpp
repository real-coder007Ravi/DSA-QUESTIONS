#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
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
int LengthRecursive(Node *head){
    if(head==NULL){
        return 0;
    }
    if(head->next==NULL){
        return 1;
    }
    
    int ans=LengthRecursive(head->next);
    return 1+ans;
}
int main()
{
    Node *head=TakeInput();
    print(head);
    int ans=LengthRecursive(head);
    cout<<ans<<endl;
}