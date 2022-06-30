#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *TakeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}
Node* deleteNode(Node*head,int pos){
    //Base case
    if(head==NULL){
        return head;
    }
    //Small calculation
    if(pos==0){
        Node* x=head->next;
        head=x;
        return head;
    }

    //Recursive Call
    Node *x=deleteNode(head->next,pos-1);
    head->next=x;
    return head;
}
void print(Node *head){
    Node *temp=head;
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