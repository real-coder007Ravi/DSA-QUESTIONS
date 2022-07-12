#include <iostream>
using namespace std;
#include <queue>
#include<stack>
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
void ZigZagOrder(BinaryTreeNode<int>* root){
    if(root==NULL)return;
    stack<BinaryTreeNode<int>*>s1,s2;
    s1.push(root);
    while(!s1.empty()||!s2.empty()){
        while(!s1.empty()){
            BinaryTreeNode<int>* front=s1.top();
            s1.pop();
            cout<<front->data<<" ";
            if(front->left!=NULL){
                s2.push(front->left);
            }
            if(front->right!=NULL){
                s2.push(front->right);
            }

        }
        cout<<endl;
        while (!s2.empty())
        {
            BinaryTreeNode<int>* front=s2.top();
            s2.pop();
            cout<<front->data<<" ";
            if(front->left!=NULL){
                s1.push(front->left);
            }
            if(front->right!=NULL){
                s1.push(front->right);
            }
            
        }
        cout<<endl;
        
    }}
    int main(){
        BinaryTreeNode<int>* root=TakeInput();
    
        ZigZagOrder(root);
    }


