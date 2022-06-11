#include<iostream>
using namespace std;
bool isSorted2(int arr[],int size){
    if(size==0||size==1){
        return true;

    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool ans=isSorted2(arr+1,size-1);
    if(ans){
        return true;
    }
    else{
        return false;
    }
}
bool isSorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    bool ans=isSorted(arr+1,size-1);
    if(!ans){
        return false;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        return true;
    }
}
int main()
{
    int arr[]={2,1,6,8,3};
    cout<<isSorted(arr,5)<<endl;
    cout<<isSorted(arr,6)<<endl;
}