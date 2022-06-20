#include<iostream>
using namespace std;
int FirstIndex(int arr[],int size,int x){
    if(size==0){
        return -1;

    }
    if(arr[0]==x){
        return 0;
    }
    int ans=FirstIndex(arr+1,size-1,x);
    if(ans==-1){
        return -1;

    }
    else{
        return 1+ans;
    }
}
int main()
{
    int arr[]={5,5,6,8,12,10};
    cout<<FirstIndex(arr,6,6)<<endl;
    cout<<FirstIndex(arr,6,11)<<endl;
}