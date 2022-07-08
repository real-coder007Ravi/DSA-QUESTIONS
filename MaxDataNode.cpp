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
};
TreeNode<int>* TakeInput(){
    int rootdata;
    cout<<"Enter rootdata"<<endl;
    cin>>rootdata;
    TreeNode<int>*root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout<<"Enter No of Children"<<front->data<<endl;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childdata;
            cout<<"Enter"<<i<<"th child of "<<front->data<<endl;
            cin>>childdata;
            TreeNode<int>*child=new TreeNode<int>(childdata);
            front->children.push_back(child);
             pendingNodes.push(child);
        }
    }
    return root;
}
void printLevelWise(TreeNode<int>*root){
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->children.size();i++){
            cout<<front->children[i]->data<<",";
            pendingNodes.push(front->children[i]);
        }
        cout<<endl;
    }
}
TreeNode<int>* MaxDataNode(TreeNode<int>*root){
    if(root==NULL)return root;
    TreeNode<int>* maxNode=root;
    
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>*child=MaxDataNode(root->children[i]);
        if(maxNode->data<child->data){
            maxNode=child;
        }

    }
    return maxNode;
}
int main()
{
    TreeNode<int>* root=TakeInput();
    printLevelWise(root);
    TreeNode<int>*maxNode=MaxDataNode(root);
    cout<<maxNode->data;
    
}