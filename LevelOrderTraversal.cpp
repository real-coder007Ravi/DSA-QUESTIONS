#include <iostream>
using namespace std;
#include <queue>
template<typename T>
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
    cout << "Enter rootData" << endl;
    cin >> rootData;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int LeftchildData;
        cout << "Enter Left child Of" << front->data << endl;
        cin >> LeftchildData;
        if (LeftchildData!= -1)
        {
            BinaryTreeNode<int> *leftChild = new BinaryTreeNode<int>(LeftchildData);
             front->left = leftChild;
            pendingNodes.push(front->left);
        }
         int RightchildData;
        cout << "Enter Right child Of" << front->data << endl;
        cin >> RightchildData;
        if (RightchildData != -1)
        {
            BinaryTreeNode<int> *RightChild = new BinaryTreeNode<int>(RightchildData);
             front->right = RightChild;
            pendingNodes.push(front->right);
        }
       
    }
     return root;}
    void printLevelOrder(BinaryTreeNode<int>* root){
        if(root==NULL)return;
        queue<BinaryTreeNode<int>*>pendingNodes;
        pendingNodes.push(root);
        pendingNodes.push(NULL);
        while(pendingNodes.size()!=0){
            BinaryTreeNode<int>* front=pendingNodes.front();
            pendingNodes.pop();
            if(front==NULL){
                if(pendingNodes.empty()){
                    break;
                }
                cout<<endl;
                pendingNodes.push(NULL);
            }
            else{
                cout<<front->data<<" ";
                if(front->left!=NULL){
                    pendingNodes.push(front->left);

                }
                if(front->right!=NULL){
                    pendingNodes.push(front->right);
                }
            }
        }}
    int main()
    {
        BinaryTreeNode<int>*root=TakeInput();
        printLevelOrder(root);
    }