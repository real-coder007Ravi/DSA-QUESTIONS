#include<iostream>
using namespace std;
#include<queue>
template<typename T>
class BinaryTreeNode{
    public:
     T data;
     BinaryTreeNode<T>*left;
     BinaryTreeNode<T>* right;
     BinaryTreeNode(T data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
     }
     ~BinaryTreeNode(){
        delete left;
        delete right;
     }
};

BinaryTreeNode<int>* TakeInputlevelwise(){
    int rootData;
    cout<<"Enter rootdata"<<endl;
    cin>>rootData;
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        int LeftChildData;
        cout<<"Enter Left Child Of"<<front->data<<endl;
        cin>>LeftChildData;
        if(LeftChildData!=-1){
            BinaryTreeNode<int>* leftChild=new BinaryTreeNode<int>(LeftChildData);
            front->left=leftChild;
            pendingNodes.push(front->left);
        }
        int RightChildData;
        cout<<"Enter Right Child Of"<<front->data<<endl;
        cin>>RightChildData;
        if(RightChildData!=-1){
            BinaryTreeNode<int>* RightChild=new BinaryTreeNode<int>(RightChildData);
            front->right=RightChild;
            pendingNodes.push(front->right);
        }
    }
    return root;
}
void printLevelWise(BinaryTreeNode<int>* root){
    if(root==NULL)return;
    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        if(front->left!=NULL){
            cout<<"L"<<front->left->data;
            pendingNodes.push(front->left);
        }
        if(front->right!=NULL){
            cout<<"R"<<front->right->data;
            pendingNodes.push(front->right);
        }
        cout<<endl;
    }
}
int Height(BinaryTreeNode<int>* root){
    if(root==NULL)return 0;
    int LeftHeight=Height(root->left);
    int RightHeight=Height(root->right);
    if(LeftHeight>RightHeight){
        return 1+LeftHeight;
    }
    return 1+RightHeight;
}
void MirrorOfABT(BinaryTreeNode<int>* root){
    if(root==NULL)return;
    BinaryTreeNode<int>*temp=root->right;
    root->right=root->left;
    root->left=temp;
    MirrorOfABT(root->left);
    MirrorOfABT(root->right);
}
int main()
{
    BinaryTreeNode<int>* root=TakeInputlevelwise();
    printLevelWise(root);
   
    MirrorOfABT(root);
    printLevelWise(root);
     int ans=Height(root);
    cout<<ans<<endl;
}