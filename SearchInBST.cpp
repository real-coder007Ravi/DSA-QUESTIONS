#include<iostream>
using namespace std;
#include<queue>
template<typename T>
class BinaryTreeNode{
    public:
     T data;
     BinaryTreeNode<T>* left;
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
BinaryTreeNode<int>* TakeInput(){
    int rootData;
    cout<<"Enter rootData"<<endl;
    cin>>rootData;
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        int leftChildData;
        cout<<"Enter Left Child Of"<<front->data<<endl;
        cin>>leftChildData;
        if(leftChildData!=-1){
            BinaryTreeNode<int>* leftChild=new BinaryTreeNode<int>(leftChildData);
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
bool IsPresent(BinaryTreeNode<int>* root,int Value){
    if(root==NULL){
        return false;
    }
    if(root->data==Value){
        return true;
    }
    else if(Value>root->data){
        bool ans=IsPresent(root->right,Value);
        return ans;

    }
    else{
        bool ans=IsPresent(root,Value);
        return ans;
    }
}
void printElements(BinaryTreeNode<int>* root,int min,int max){
    if(root==NULL)return;
    if(root->data<min){
        
        printElements(root->right,min,max);
    }
    else if(root->data>max){
        
        printElements(root->left,min,max);
    }
    else{
        printElements(root->left,min,max);
        cout<<root->data<<" ";
        printElements(root->right,min,max);
    }
}
int main()
{
    BinaryTreeNode<int>* root=TakeInput();
    printLevelWise(root);
    bool ans=IsPresent(root,12);
    cout<<ans<<endl;
    printElements(root,2,3);
}