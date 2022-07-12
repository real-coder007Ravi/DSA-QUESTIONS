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
BinaryTreeNode<int>* helper(int *inorder,int *preorder,int preS,int preE,int inS,int inE){
    if(preS>preE)return NULL;
    int rooData=preorder[preS];
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rooData);
    int length=0;
    for(int i=inS;inorder[i]!=root->data;i++){
        length++;
    }
    int LeftPreS=preS+1;
    int LeftPreE=preS+length;
    int RightPreS=LeftPreE+1;
    int RightPreE=preE;
    int LeftInS=inS;
    int LeftInE=inS+length-1;
    int RightInS=LeftInE+2;
    int RightInE=inE;
    root->left=helper(inorder,preorder,LeftPreS,LeftPreE,LeftInS,LeftInE);
    root->right=helper(inorder,preorder,RightPreS,RightPreE,RightInS,RightInE);
    return root;

}
BinaryTreeNode<int>* helper2(int *postorder,int *inorder,int postS,int postE,int inS,int inE){
    if(postS>postE)return NULL;
    int rootData=postorder[postE];
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    int length=0;
    for(int i=inS;inorder[i]!=root->data;i++){
        length++;
    }
    int LeftPostS=postS;
    int LeftPostE=postS+length-1;
    int LeftInS=inS;
    int LeftInE=inS+length-1;
     int RightPostS=LeftPostE+1;
    int RightPostE=postE-1;
    int RightInS=LeftInE+2;
    int RightInE=inE;
   
    root->left=helper2(postorder,inorder,LeftPostS,LeftPostE,LeftInS,LeftInE);
    root->right=helper2(postorder,inorder,RightPostS,RightPostE,RightInS,RightInE);
    return root;

}
BinaryTreeNode<int>* buildTree(int *inorder,int *preorder,int size){
    return helper(inorder,preorder,0,size-1,0,size-1);
}
BinaryTreeNode<int>* buildTree2(int *postorder,int *inorder,int size){
    return helper2(postorder,inorder,0,size-1,0,size-1);
}
int main(){
    int inorder[]={4,2,5,1,6,3,7};
    int postorder[]={4,5,2,6,7,3,1};
    int preorder[]={1,2,4,5,3,6,7};
    BinaryTreeNode<int>* root=buildTree2(postorder,inorder,7);
    printLevelWise(root);
}