#include<iostream>
using namespace std;
//Time Complexity-O(n)
class Node{
    public:
     int data;
     Node* next;
     Node(int data){
        this->data=data;
        this->next=NULL;
     }
};
class Pair{
    public:
     Node* head;
     Node* tail;
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

Pair ReverseLL(Node* head){
    if(head==NULL||head->next==NULL){
        Pair ans;
        ans.head=head;
        ans.tail=head;
        return ans;
    }
    Pair smallans=ReverseLL(head->next);
    smallans.tail->next=head;
    head->next=NULL;
    Pair ans;
    ans.head=smallans.head;
    ans.tail=head;
    return ans;

}
Node* Reverse(Node* head){
    return ReverseLL(head).head;
}
int main()
{
    Node* head=TakeInput();
    print(head);
    cout<<endl;
    head=Reverse(head);
    print(head);
}