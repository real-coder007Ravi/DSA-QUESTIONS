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
vector<int>* RootToNodePath(BinaryTreeNode<int>* root,int data){
    if(root==NULL){
        return NULL;
    }
    if(root->data==data){
        vector<int>* ans=new vector<int>();
        ans->push_back(root->data);
        return ans;
    }
    vector<int>* LeftAns=RootToNodePath(root->left,data);
    if(LeftAns!=NULL){
        LeftAns->push_back(root->data);
        return LeftAns;
    }
    vector<int>* RightAns=RootToNodePath(root->right,data);
    if(RightAns!=NULL){
        RightAns->push_back(root->data);
        return RightAns;
    }
    else{
        return NULL;
    }
}
int main(){
    BinaryTreeNode<int>* root=TakeInput();
    vector<int>* ans=RootToNodePath(root,9);
    for(int i=0;i<ans->size();i++){
        cout<<ans->at(i)<<endl;
    }
    delete ans;
}