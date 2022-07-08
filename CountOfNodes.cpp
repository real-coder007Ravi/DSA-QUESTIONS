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
    int RootData;
    cout<<"Enter RootData"<<endl;
    cin>>RootData;
    TreeNode<int>*root=new TreeNode<int>(RootData);
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        TreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout<<"Enter No of Children"<<front->data<<endl;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int ChildData;
            cout<<"Enter"<<i<<"th child of "<<front->data<<endl;
            cin>>ChildData;
            TreeNode<int>*child=new TreeNode<int>(ChildData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
int CountOfNodes(TreeNode<int>*root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=CountOfNodes(root->children[i]);

    }
    return ans;
}

int main()
{
    TreeNode<int>*root=TakeInput();
    cout<<CountOfNodes(root)<<endl;
}