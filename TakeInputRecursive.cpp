#include<iostream>
using namespace std;
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
void print(BinaryTreeNode<int>* root){
    if(root==NULL)return;
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}
BinaryTreeNode<int>* TakeInput(){
    int RootData;
    cout<<"Enter RootData"<<endl;
    cin>>RootData;
   
    if(RootData==-1)return NULL;
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(RootData);
    BinaryTreeNode<int>*left=TakeInput();
    BinaryTreeNode<int>* right=TakeInput();
    root->left=left;
    root->right=right;
    return root;

}
int main()
{
    BinaryTreeNode<int>* root=TakeInput();
    print(root);
}