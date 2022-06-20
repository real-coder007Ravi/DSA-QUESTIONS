#include<iostream>
using namespace std;
int LastIndex(int arr[],int size,int x){
    if(size==0){
        return -1;
    }
    int ans=LastIndex(arr+1,size-1,x);
     if(ans==-1){
        if(arr[0]==x){
            return 0;
        }else{
            return -1;
        }
    
        
     }else{
        return 1+ans;
     }
}
int main()
{
    int arr[]={5,6,6,7,7,8};
    cout<<LastIndex(arr,6,7)<<endl;
    cout<<LastIndex(arr,6,10)<<endl;
}