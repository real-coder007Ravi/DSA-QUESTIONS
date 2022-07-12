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
pair<int, int> MaxMin(BinaryTreeNode<int> *root)
{
    if (root->left == NULL&& root->right==NULL)
    {
        pair<int, int> ans;
        ans.first = root->data;
        ans.second = root->data;
        return ans;
    }
    pair<int,int>ans;
    ans.first=root->data;
    ans.second=root->data;
    if(root->left!=NULL){
        pair<int,int>LeftAns=MaxMin(root->left);
        ans.first=min(ans.first,LeftAns.first);
        ans.second=max(ans.second,LeftAns.second);
    }
      if(root->right!=NULL){
        pair<int,int>RightAns=MaxMin(root->right);
        ans.first=min(ans.first,RightAns.first);
        ans.second=max(ans.second,RightAns.second);
    }
 
    return ans;
}
int main()
{
    BinaryTreeNode<int> *root = TakeInput();
    printLevelWise(root);
    pair<int, int> p=MaxMin(root);
    cout << "Maximum Of A Binary Tree is: " << p.first << endl;
    cout << "Minimum oF A Binary Tree is: " << p.second << endl;
}