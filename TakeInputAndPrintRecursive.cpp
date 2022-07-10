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
BinaryTreeNode<int>* TakeInput(){
     int Data;
     cout<<"Enter Data"<<endl;
     cin>>Data;
     if(Data==-1)return NULL;
     BinaryTreeNode<int>* root=new BinaryTreeNode<int>(Data);
     BinaryTreeNode<int>* left=TakeInput();
     BinaryTreeNode<int>* right=TakeInput();
     root->left=left;
     root->right=right;
     return root;
}
void printRecursive(BinaryTreeNode<int>* root){
    if(root==NULL)return;
    cout<<root->data<<":";
    if(root->left!=NULL){
         cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;

    }
    cout<<endl;
    printRecursive(root->left);
    printRecursive(root->right);


}
int main()
{
    BinaryTreeNode<int>* root=TakeInput();
    printRecursive(root);
}