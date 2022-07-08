#include<iostream>
using namespace std;
#include<vector>
#include<queue>
template<typename T>
class TreeNode{
    public:
     T data;
     vector<TreeNode<int>*>children;
     TreeNode(T data){
        this->data=data;
     }
     ~TreeNode(){
        for(int i=0;i<children.size();i++){
            delete children[i];
        }
     }
};
TreeNode<int>* TakeInput()
{
    int rootdata;
    cout<<"Enter rootdata"<<endl;
    cin>>rootdata;
    TreeNode<int>* root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout<<"Enter no of children of"<<front->data<<endl;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int ChildData;
            cout<<"Enter"<<i<<"th child of"<<front->data<<endl;
            cin>>ChildData;
            TreeNode<int>*child=new TreeNode<int>(ChildData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void PreOrderTraversal(TreeNode<int>*root){
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        PreOrderTraversal(root->children[i]);
    }
}
void PostOrderTraversal(TreeNode<int>*root){
   
    for(int i=0;i<root->children.size();i++){
        PostOrderTraversal(root->children[i]);
    }
     cout<<root->data<<" ";
}
int main()
{
    TreeNode<int>* root=TakeInput();
    PreOrderTraversal(root);cout<<endl;
    PostOrderTraversal(root);
}