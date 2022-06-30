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
        Node* newnode=new Node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
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
Node* MidPoint(Node*head){
    if(head==NULL)return head;
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node* MergeTwoSorted(Node* head1,Node* head2){
    if(head1==NULL)return head2;
    if(head2==NULL)return head1;
    Node* head=NULL;
    Node* tail=NULL;
    if(head1->data<head2->data){
        head=head1;
        tail=head1;
        head1=head1->next;
    }
    else{
        head=head2;
        tail=head2;
        head2=head2->next;
    }
    while(head1!=NULL&&head2!=NULL){
        if(head1->data<head2->data){
            tail->next=head1;
            tail=head1;
            head1=head1->next;
        }
        else{
            tail->next=head2;
            tail=head2;
            head2=head2->next;
        }
    }
    if(head1!=NULL){
        tail->next=head1;
    }
    if(head2!=NULL){
        tail->next=head2;
    }
    return head;

    
}
Node* MergeSort(Node* head){
    if(head==NULL||head->next==NULL)return head;
   
    Node* x=MidPoint(head);
     Node* temp1=head;
    Node* temp2=x->next;
    x->next=NULL;
    Node* a=MergeSort(temp1);
    Node* b=MergeSort(temp2);
    Node* c=MergeTwoSorted(a,b);
    return c;


}
int main()
{
    Node* head=TakeInput();
    Node* ans=MergeSort(head);
    print(ans);
}