#include<iostream>
using namespace std;
#include<vector>
template<typename T>
class TreeNode{
    public:
     T data;
     vector<TreeNode<T>*>children;
     TreeNode(T data){
        this->data=data;
     }

};

int main()
{
    TreeNode<int>* root=new TreeNode<int>(10);
    TreeNode<int>*node1=new TreeNode<int>(20);
    TreeNode<int>*node2=new TreeNode<int>(30);
    root->children.push_back(node1);
    root->children.push_back(node2);
}