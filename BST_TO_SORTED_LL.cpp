#include <iostream>
using namespace std;
#include <queue>
#include<climits>
template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    BinaryTreeNode(T data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    ~BinaryTreeNode()
    {
        delete left;
        delete right;
    }
};

BinaryTreeNode<int> *TakeInput()
{
    int rootData;
    cout << "Enter RootData" << endl;
    cin >> rootData;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int LeftChildData;
        cout << "Enter Left child Of " << front->data << endl;
        cin >> LeftChildData;
        if (LeftChildData != -1)
        {
            BinaryTreeNode<int> *leftChild = new BinaryTreeNode<int>(LeftChildData);
            front->left = leftChild;
            pendingNodes.push(front->left);
        }
        int RightChildData;
        cout << "Enter Right child Of " << front->data << endl;
        cin >> RightChildData;
        if (RightChildData != -1)
        {
            BinaryTreeNode<int> *RightChild = new BinaryTreeNode<int>(RightChildData);
            front->right = RightChild;
            pendingNodes.push(front->right);
        }
        cout << endl;
    }
    return root;
}
void printLevelWise(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";
        if (front->left != NULL)
        {
            cout << "L" << front->left->data;
            pendingNodes.push(front->left);
        }
        if (front->right != NULL)
        {
            cout << "R" << front->right->data;
            pendingNodes.push(front->right);
        }
        cout << endl;
    }
}
template<typename T>
class Node{
    public:
     T data;
     Node* next;
     Node(T data){
        this->data=data;
        this->next=NULL;
     }
};
pair<Node<int>*,Node<int>*>BSTtOSortedLL(BinaryTreeNode<int>* root){
    if(root==NULL){
        pair<Node<int>*,Node<int>*>ans;
        ans.first=NULL;
        ans.second=NULL;
        return ans;
    }
    pair<Node<int>*,Node<int>*>leftAns=BSTtOSortedLL(root->left);
    pair<Node<int>*,Node<int>*>RightAns=BSTtOSortedLL(root->right);
    pair<Node<int>*,Node<int>*>ans;
    Node<int> *node=new Node<int>(root->data);
    node->next=RightAns.first;
    if(leftAns.second!=NULL){
        leftAns.second->next=node;
    }
    if(leftAns.first!=NULL){
        ans.first=leftAns.first;

    }
    else{
        ans.first=node;

    }
    if(RightAns.second!=NULL){
        ans.second=RightAns.second;
    }
    else{
        ans.second=node;
    }
    return ans;


}
Node<int>* ConstructLL(BinaryTreeNode<int>* root){
    return BSTtOSortedLL(root).first;
}
void print(Node<int>* head){
    Node<int>* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    BinaryTreeNode<int>*root=TakeInput();
    Node<int>* head=ConstructLL(root);
    print(head);
}