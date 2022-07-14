#include <iostream>
using namespace std;
#include <queue>
#include<algorithm>
#include<climits>
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
void ConvertTreeToArray(BinaryTreeNode<int>* root,vector<int>&arr){
    if(root==NULL)return;
    arr.push_back(root->data);
    ConvertTreeToArray(root->left,arr);
    ConvertTreeToArray(root->right,arr);

}
void pairSum(BinaryTreeNode<int>* root,int sum){
    vector<int>arr;
    ConvertTreeToArray(root,arr);
    sort(arr.begin(),arr.end());
    int i=0,j=arr.size()-1;
    while(i<j){
         if(arr[i]+arr[j]<sum){
            i++;
         }
         else if(arr[i]+arr[j]>sum){
            j--;
         }
         else{
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
         }
    }
}
int main(){
    BinaryTreeNode<int>* root=TakeInput();
    printLevelWise(root);
    pairSum(root,9);
}