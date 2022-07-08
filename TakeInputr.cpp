#include<iostream>
using namespace std;
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
    int rootData;
    cout<<"Enter RootData"<<endl;
    cin>>rootData;
    TreeNode<int>* root=new TreeNode<int>(rootData);
     int numChild;
     cout<<"Enter No of Children of"<<root->data<<endl;
     cin>>numChild;
     for(int i=0;i<numChild;i++){
        TreeNode<int>*child=TakeInput();
        root->children.push_back(child);
     }
     return root;
}
void printtree(TreeNode<int>*root){
    cout<<root->data<<":"<<" ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printtree(root->children[i]);
    }
}
TreeNode<int>* TakeInput_Level(){
    int rootData;
    cout<<"Enter RootData"<<endl;
    cin>>rootData;
    TreeNode<int>*root=new TreeNode<int>(rootData);
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout<<"Enter No of Children of "<<front->data<<endl;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int ChildData;
            cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>ChildData;
            TreeNode<int>*child=new TreeNode<int>(ChildData);
            front->children.push_back(child);
            pendingNodes.push(child);

        
    }}
    return root;

}
void printLevelWise(TreeNode<int>*root){
    
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        TreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":"<<" ";
        for(int i=0;i<front->children.size();i++){
            cout<<front->children[i]->data;
            if(i<front->children.size()-1){
                cout<<",";
            }
            pendingNodes.push(front->children[i]);
        }
        cout<<endl;
    }

}

int main()
{
   
    TreeNode<int>*root1=TakeInput_Level();
    printLevelWise(root1);
}