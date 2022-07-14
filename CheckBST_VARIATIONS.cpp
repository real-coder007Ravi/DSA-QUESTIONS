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
int maximum(BinaryTreeNode<int>* root){
    if(root==NULL)return INT_MIN;
    return max(root->data,max(maximum(root->left),maximum(root->right)));

}
int minimum(BinaryTreeNode<int>* root){
    if(root==NULL)return INT_MAX;
    return min(root->data,min(minimum(root->left),minimum(root->right)));

}
bool isBST1(BinaryTreeNode<int>* root){
    if(root==NULL)return true;
    int LeftMax=maximum(root->left);
    int RightMin=minimum(root->right);
    bool output=(root->data>LeftMax)&&(root->data<=RightMin)&&(isBST1(root->left))&&(isBST1(root->right));
    return output;
}
class isBSTReturn{
    public:
     bool isBST;
     int minimum;
     int maximum;
};
isBSTReturn isBST2(BinaryTreeNode<int>* root){
    if(root==NULL){
        isBSTReturn output;
        output.minimum=INT_MAX;
        output.maximum=INT_MIN;
        output.isBST=true;
        return output;
    }
    isBSTReturn leftans=isBST2(root->left);
    isBSTReturn right=isBST2(root->right);
    int maximum=max(root->data,max(leftans.maximum,right.maximum));
    int minimum=min(root->data,min(leftans.minimum,right.minimum));
    bool isBST=(root->data>leftans.maximum)&&(root->data<=right.minimum)&&leftans.isBST&&right.isBST;
    isBSTReturn ans;
    ans.minimum=minimum;
    ans.maximum=maximum;
    ans.isBST=isBST;
    return ans;

}
bool isBST3(BinaryTreeNode<int>* root,int min=INT_MIN,int max=INT_MAX){
    if(root==NULL)return true;
    if(root->data>min||root->data>max){
        return false;
    }
    bool isLeftOk=isBST3(root,min,root->data-1);
    bool isRightOK=isBST3(root,root->data,max);
    return isLeftOk &&  isRightOK;
}
int main(){
    BinaryTreeNode<int>* root=TakeInput();
    printLevelWise(root);
    cout<<isBST1(root)<<endl;
    isBSTReturn ans=isBST2(root);
    cout<<ans.isBST<<endl;
    cout<<isBST3(root,4,5)<<endl;
}