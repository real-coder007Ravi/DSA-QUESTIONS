#include <iostream>
using namespace std;
#include <queue>
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
     
     Node<T>*next;
     Node(T data){
        this->data=data;
        this->next=NULL;
     };
};
vector<Node<int>*> ConstructLinkedList(BinaryTreeNode<int>* root){
    vector<Node<int>*>ans;
    if(root==NULL){
        return ans;
    }
    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    Node<int>*head=NULL;
    Node<int>* tail=NULL;
    bool newNode=true;
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        if(front==NULL){
            if(pendingNodes.empty()){
                ans.push_back(head);
                break;
            }
            ans.push_back(head);
            pendingNodes.push(NULL);
            head=tail=NULL;
            newNode=true;
        }
        else{
             if(newNode){
                head=new Node<int>(front->data);
                tail=head;
                newNode=false;
             }
             else{
                Node<int>* node=new Node<int>(front->data);
                tail->next=node;
                tail=node;
             }
             if(front->left!=NULL){
                pendingNodes.push(front->left);
             }
             if(front->right!=NULL){
                pendingNodes.push(front->right);
             }
        }}
        return ans;}
void print(Node<int> *head) {
    Node<int> *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    BinaryTreeNode<int>* root=TakeInput();
    vector<Node<int>*>ans=ConstructLinkedList(root);
    for(int i=0;i<ans.size();i++){
        print(ans[i]);
    }
}