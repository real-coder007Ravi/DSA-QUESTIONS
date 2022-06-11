#include<iostream>
using namespace std;
int AllIndexes(int arr[],int size,int x,int output[]){
    //Base Case
    if(size==0){
        return -1;
    }
    int ans=AllIndexes(arr,size-1,x,output);
    
    if(arr[size-1]==x){
        output[ans]=size-1;
        ans++;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n
    int *arr=new int[n];
    int *output=new int[n];
    int x;
    cin>>x;
    int ans=AllIndexes(arr,6,6,output);
    for(int i=0;i<ans;i++){
        cout<<output[i]<<endl;
    }
}