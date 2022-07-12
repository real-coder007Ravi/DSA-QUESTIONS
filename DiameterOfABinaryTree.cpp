#include <iostream>
using namespace std;
#include <queue>
template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    BinaryTreeNode(T data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    ~BinaryTreeNode()
    {
        delete left;
        delete right;
    }
};

BinaryTreeNode<int> *TakeInput()
{
    int rootData;
    cout << "Enter RootData" << endl;
    cin >> rootData;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int LeftChildData;
        cout << "Enter Left child Of " << front->data << endl;
        cin >> LeftChildData;
        if (LeftChildData != -1)
        {
            BinaryTreeNode<int> *leftChild = new BinaryTreeNode<int>(LeftChildData);
            front->left = leftChild;
            pendingNodes.push(front->left);
        }
        int RightChildData;
        cout << "Enter Right child Of " << front->data << endl;
        cin >> RightChildData;
        if (RightChildData != -1)
        {
            BinaryTreeNode<int> *RightChild = new BinaryTreeNode<int>(RightChildData);
            front->right = RightChild;
            pendingNodes.push(front->right);
        }
        cout << endl;
    }
    return root;
}
void printLevelWise(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";
        if (front->left != NULL)
        {
            cout << "L" << front->left->data;
            pendingNodes.push(front->left);
        }
        if (front->right != NULL)
        {
            cout << "R" << front->right->data;
            pendingNodes.push(front->right);
        }
        cout << endl;
    }
}
int Height(BinaryTreeNode<int>* root){
    if(root==NULL)return 0;
    return 1+max(Height(root->left),Height(root->right));
}
int Diameter(BinaryTreeNode<int>* root){
    if(root==NULL)return 0;
    int option1=Height(root->left)+Height(root->right);
    int option2=Diameter(root->left);
    int option3=Diameter(root->right);
    return max(option1,max(option2,option3));

}
pair<int,int>HeightDiameter(BinaryTreeNode<int>* root){
    if(root==NULL){
        pair<int,int>ans;
        ans.first=0;
        ans.second=0;
        return ans;
    }
    pair<int,int>LeftAns=HeightDiameter(root->left);
    pair<int,int>RightAns=HeightDiameter(root->right);
    int LeftHeight=LeftAns.first;
    int LeftDiameter=LeftAns.second;
    int RightHeight=RightAns.first;
    int RightDiameter=RightAns.second;
    int height=1+max(LeftHeight,RightHeight);
    int diameter=max(LeftHeight+RightHeight,max(LeftDiameter,RightDiameter));
    pair<int,int>p;
    p.first=height;
    p.second=diameter;
    return p;

}
int main(){
    BinaryTreeNode<int>* root=TakeInput();
    printLevelWise(root);
    cout<<Diameter(root)<<endl;
    pair<int,int>ans=HeightDiameter(root);
    cout<<"Height : "<<ans.first<<endl;
    cout<<"Diameter : "<<ans.second<<endl;
}