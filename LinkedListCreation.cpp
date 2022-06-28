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
void print(Node *head){
    //Why not temp->next!=NULL because if we do this mistake then we wil not be able to print tail node data as it's next points to NULL means temp will point to next and in while loop condition temp->next!=NULL so it will not go inside the loop hence the tail node will be left to be printed.
   //prefer to use temp pointer for traversal over the linked list
   //prefer to use temp node
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    //Statically
   /* Node n1(10);
    Node *head=&n1;
    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(50);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    print(&n1);  */
    //Dynamically
    Node *n6=new Node(40);
    Node *head=n6;
    Node *n7=new Node(80);
    Node *n8=new Node(10);
    Node *n9=new Node(45);
    n6->next=n7;
    n7->next=n8;
    n8->next=n9;
    print(n6);
    

}