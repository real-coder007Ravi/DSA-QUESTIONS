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
pair<bool,int> isBalanced2(BinaryTreeNode<int>* root){
    if(root==NULL){
        pair<bool,int>ans;
        ans.first=true;
        ans.second=0;
        return ans;
    }
    pair<bool,int>leftAns=isBalanced2(root->left);
    pair<bool,int>RightAns=isBalanced2(root->right);
    pair<bool,int>ans1;
    ans1.first=(abs(leftAns.first-RightAns.first)<=1)&&leftAns.first&&RightAns.first;
    ans1.second=max(leftAns.second,RightAns.second)+1;
    return ans1;

}
bool isBalanced(BinaryTreeNode<int>* root){
    return isBalanced2(root).first;
}
void printLevelOrder(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*>pendingnodes;
    pendingnodes.push(root);
    pendingnodes.push(NULL);
    while(pendingnodes.size()!=0){
        BinaryTreeNode<int>* front=pendingnodes.front();
        pendingnodes.pop();
        if(front==NULL){
            if(pendingnodes.empty()){
                break;
            }
            cout<<"\n";
            pendingnodes.push(NULL);
        }
        else{
            cout<<front->data<<" ";
            if(front->left!=NULL){
                pendingnodes.push(front->left);
            }
             if(front->right!=NULL){
                pendingnodes.push(front->right);
            }

        }
    }
}
int main(){
    BinaryTreeNode<int>* root=TakeInput();
    printLevelWise(root);
    cout<<isBalanced(root)<<endl;
    printLevelOrder(root);
    cout<<endl;
    
}