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
int Height(TreeNode<int>* root){
    if(root==NULL)return 0;
    int ans=0;
     for(int i=0;i<root->children.size();i++){
        int child=Height(root->children[i]);
        if(child>ans){
            ans=child;
        }
     }
     return ans+1;
}
int main()
{
    TreeNode<int>*root=TakeInput();
    printLevelwise(root);
    int ans=Height(root);
    cout<<ans<<endl;
}