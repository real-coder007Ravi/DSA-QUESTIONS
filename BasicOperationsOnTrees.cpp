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
TreeNode<int>* TakeInputRecursive(){
    int RootData;
    cout<<"Enter RootData"<<endl;
    cin>>RootData;
    TreeNode<int>* root=new TreeNode<int>(RootData);
    int numChild;
    cout<<"Enter No of Children Of"<<root->data<<endl;
    cin>>numChild;
    for(int i=0;i<numChild;i++){
        TreeNode<int>* child=TakeInputRecursive();
        root->children.push_back(child);
    }
    return root;
}
void printRecursive(TreeNode<int>*root){
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";

    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printRecursive(root->children[i]);
    }

}
TreeNode<int>* TakeInputLevelWise(){
    int rootData;
    cout<<"Enter rootData"<<endl;
    cin>>rootData;
    TreeNode<int>*root=new TreeNode<int>(rootData);
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout<<"Enter no of Children of "<<front->data<<endl;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
             int ChildData;
             cout<<"Enter "<<i<<"th child"<<front->data<<endl;
             cin>>ChildData;
             TreeNode<int>*child=new TreeNode<int>(ChildData);
             front->children.push_back(child);
             pendingNodes.push(child); 
        }
    }
    return root;

}
void printLevelWise(TreeNode<int>*root){
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
int main()
{
   
    TreeNode<int>*root1=TakeInputLevelWise();
    printLevelWise(root1);
}