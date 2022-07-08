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
    while(!pendingNodes.empty()){
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout<<"Enter No of Children of "<<front->data<<endl;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int Childata;
            cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>Childata;
            TreeNode<int>*child=new TreeNode<int>(Childata);
            front->children.push_back(child);
            pendingNodes.push(child);
        }


    }
    return root;

}
void printLevelwise(TreeNode<int>* root){
     queue<TreeNode<int>*>pendingNodes;
     pendingNodes.push(root);
     while(!pendingNodes.empty()){
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
void Depth(TreeNode<int>*root,int k){
    if(root==NULL)return;
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    for(int i=0;i<root->children.size();i++){
        Depth(root->children[i],k-1);
    }
}
int CountOfLeafNodes(TreeNode<int>* root){
    
    
      int count=0;
      int i;
    for(i=0;i<root->children.size();i++){
       
        count+=CountOfLeafNodes(root->children[i]);
    }
    if(i==0){
        return count+1;
    }
    return count;
}
int main()
{
    TreeNode<int>*root=TakeInput();
    
    cout<<CountOfLeafNodes(root)<<endl;
}