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
class Pair{
    public:
     int maximum;
     int minimum;
     bool isBST;
     int height;
};
Pair Largest(BinaryTreeNode<int>* root){
    if(root==NULL){
        Pair obj;
        obj.maximum=INT_MIN;
        obj.minimum=INT_MAX;
        obj.isBST=true;
        obj.height=0;
        return obj;
    }
    Pair left=Largest(root->left);
    Pair right=Largest(root->right);
    int maximum=max(root->data,max(left.maximum,right.maximum));
    int minimum=min(root->data,min(left.minimum,right.minimum));
    bool isBSTFinal=(root->data>left.maximum)&&(root->data<right.minimum)&&(left.isBST)&&right.isBST;
    Pair obj;
    obj.minimum=minimum;
    obj.maximum=maximum;
    obj.isBST=isBSTFinal;
    if(isBSTFinal){
        obj.height=1+max(left.height,right.height);
    }
    else{
        obj.height=max(left.height,right.height);    }
        return obj;
}
int LargestBST(BinaryTreeNode<int>* root){
    return Largest(root).height;
}
