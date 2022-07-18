#include<iostream>
using namespace std;

bool CheckmaxHeap(int arr[],int size){
    for(int i=0;2*i+1<size;i++){
        int LeftChild=2*i+1;
        int RightChild=LeftChild+1;
        if(arr[i]<arr[LeftChild])return false;
        if(RightChild<size && arr[i]<arr[RightChild])return false;
    }
    return true;
}

int main()
{
    int arr[]={42 ,20, 18, 6, 14, 11, 9, 4};
    bool ans=CheckmaxHeap(arr,8);
    cout<<ans<<endl;
}