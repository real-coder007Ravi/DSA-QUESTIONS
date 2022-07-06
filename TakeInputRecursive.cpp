#include<iostream>
using namespace std;
#include<vector>
template<typename T>
class TreeNode{
    public:
     T data;
     vector<TreeNode<int>*>children;
     TreeNode(T data){
        this->data=data;
     }

};
void printTree(TreeNode<int>*root){
    //EDGE CASE
    if(root==NULL)return;
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
             cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}
TreeNode<int>*   TakeInput(){
    int rootData;
    cout<<"Enter Root Data"<<endl;
    cin>>rootData;
    TreeNode<int>*root=new TreeNode<int>(rootData);
    int n;
    cout<<"Enter No of Children of "<<rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>*child=TakeInput();
        root->children.push_back(child);
    }
    return root;
}
int main()
{
    TreeNode<int>*root=TakeInput();
    printTree(root);
}