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
     cout<<"Enter No Of Children Of"<<root->data<<endl;
     cin>>numChild;
     for(int i=0;i<numChild;i++){
        TreeNode<int>* child=TakeInputRecursive();
        root->children.push_back(child);
     }
     return root;
}
void printrecursive(TreeNode<int>* root){
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printrecursive(root->children[i]);
    }
}
TreeNode<int>* TakeInputLevelWise(){
    int RootData;
    cout<<"Enter RootData"<<endl;
    cin>>RootData;
    TreeNode<int>* root=new TreeNode<int>(RootData);
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout<<"Enter No of Children Of"<<front->data<<endl;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int ChildData;
            cout<<"Enter"<<i<<"th child of"<<front->data<<endl;
            cin>>ChildData;
            TreeNode<int>* child=new TreeNode<int>(ChildData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void PrintLevelWise(TreeNode<int>* root){
     queue<TreeNode<int>*>pendingNodes;
     pendingNodes.push(root);
     while (pendingNodes.size()!=0){
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
int CountOfNodes(TreeNode<int>*root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=CountOfNodes(root->children[i]);
    }
    return ans;
}
int SumOfNodes(TreeNode<int>* root){
    if(root==NULL)return 0;
    int sum=root->data;
    for(int i=0;i<root->children.size();i++){
        sum+=SumOfNodes(root->children[i]);
    }
    return sum;
}

int main()
{
    
    TreeNode<int>* root=TakeInputLevelWise();
    PrintLevelWise(root);
    int ans=CountOfNodes(root);
    cout<<"Count Of Nodes: "<<ans<<endl;
    int Sum=SumOfNodes(root);
    cout<<"Sum OF Nodes: "<<Sum<<endl;
}