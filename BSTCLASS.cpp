#include <iostream>
using namespace std;
#include <queue>
#include <climits>
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

class BST
{
    BinaryTreeNode<int> *root;

public:
    BST()
    {
        this->root = root;
    }
    ~BST()
    {
        delete root;
    }

private:
    bool hasData(int data, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
            return false;
        if (node->data == data)
        {
            return true;
        }
        else if (data > node->data)
        {
            return hasData(data, node->right);
        }
        else if (data < node->data)
        {
            return hasData(data, node->left);
        }
    }
      BinaryTreeNode<int>* insert(int data,BinaryTreeNode<int>* node){
        if(node==NULL){
            BinaryTreeNode<int>* newNode=new BinaryTreeNode<int>(node->data);
            return newNode;
        }
        if(node->data>data){
            node->left=insert(data,node->left);
        }
        else{
            node->right=insert(data,node->right);
    }
       return node;
    }
    BinaryTreeNode<int>* deleteData(int data,BinaryTreeNode<int>* node){
        if(node==NULL)return NULL;
        if(node->data<data){
            node->right=deleteData(data,node->right);
            return node;
        }
        else if(node->data>data){
            node->left=deleteData(data,node->left);
            return node;
        }
        else{
            if(node->left==NULL&&node->right==NULL){
                delete node;
                return NULL;
            }
            else if(node->left==NULL){
                BinaryTreeNode<int>*temp=node->right;
                node->right=NULL;
                delete node;
                return temp;
            }
            else if(node->right==NULL){
                BinaryTreeNode<int>*temp=node->left;
                node->left=NULL;
                delete node;
                return temp;
            }
            else{
                BinaryTreeNode<int>*minNode=node->right;
                while(minNode->left!=NULL){
                    minNode=minNode->left;
                }
                int Rightmin=minNode->data;
                node->data=Rightmin;
                node->right=deleteData(Rightmin,node->right);
                return node;
            }
        }
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

public:
    bool hasData(int data)
    {
        return hasData(data, root);
    }
    void insert(int data){
        this->root=insert(data,root);
    }
    void deleteData(int data){
        this->root=deleteData(data,root);
    }
    void printTree(){
        printLevelWise(root);
    }
   
};
int main(){
    BST b;
    b.insert(10);
    b.insert(5);
    b.insert(20);
    b.insert(3);
    b.insert(7);
    b.insert(15);
    b.printTree();
    b.deleteData(100);
    b.printTree();
}